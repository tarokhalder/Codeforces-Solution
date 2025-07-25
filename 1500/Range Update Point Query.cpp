//https://codeforces.com/contest/1791/problem/F
//https://codeforces.com/contest/1791/submission/330790186
#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

class Segment_tree{
      public:
	 int n;
	 vector <int> L;
	 Segment_tree() {
	    this -> n = 0;
	 }
	 Segment_tree(int n) {
	     this -> n = n;
	     L.resize(4 * n , 0);
	 }
	 void update(int start , int end , int node , int l , int r) {
	      if (start > r || end < l) {
	          return;
	      }
	      if (start >= l && end <= r) {
	          L[node] += 1;
		  return;
	      }
	      int mid = (start + end) / 2;
	      update(start , mid , 2 * node + 1 , l , r);
	      update(mid + 1 , end ,  2 * node + 2 , l , r);
	 }
	 void query(int start , int end , int node, int x) {
	     if (start != end) {
	         int mid = (start + end ) / 2;
		 if (x <= mid) {
		    query(start , mid , 2 * node + 1, x);
		 } else {
		    query(mid + 1 , end , 2 * node + 2 , x);
		 }
	     }
	     cnt += L[node];
	 }
	 void update(int l , int r) {
	      update(0 , n - 1 , 0 , l - 1 , r - 1);
	 }
	 void query(int x){
	      query(0 , n - 1 , 0 , x - 1 );
	 }
};

int find(int cnt , int num) {
    if (cnt <= 0 || num < 10) {
       return num;
    }
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
	num /= 10;
    }
    return find(cnt - 1 , sum);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int n , q;
	cin >> n >> q;
	vector <int> a(n);
	for (auto & c : a) {
	    cin >> c;
	}
	Segment_tree tree(n);
	while (q--) {
	    int x;
	    cin >> x;
	    if (x == 1) {
	        int l , r;
		cin >> l >> r;
		tree.update(l , r);
	    } else {
	        int N;
		cin >> N;
		tree.query(N);
		int ans = find(cnt , a[N - 1]);
		cout << ans << "\n";
		cnt = 0;
	    }
	}


    }
    return 0;
}
