//https://codeforces.com/problemset/problem/276/C
//https://codeforces.com/contest/276/submission/330821198
#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int cnt = 0;

class Segment_tree{
    public:
      int n;
      vector <int> S;
      Segment_tree() {
          this -> n = n;
      }
      Segment_tree(int n) {
         this ->n = n;
	 S.resize(4 * n , 0);
      }
      void update(int start , int end , int node ,int l , int r) {
           if (start > r || end < l) {
	       return;
	   }
	   if (start >= l && end <= r) {
	      S[node] += 1;
	      return;
	   }
	   int mid = (start + end) / 2;
	   update(start , mid , 2 * node + 1 , l , r);
	   update(mid + 1 , end , 2 * node + 2 , l , r);
      }
      void update(int l , int r) {
           update(0 , n - 1 , 0 , l - 1 , r - 1);
      }
      void query(int start, int end , int node , int x) {
           if (start != end) {
	       int mid = (start + end) / 2;
	       if (x <= mid) {
	           query(start , mid , 2 * node + 1 , x);
	       } else {
	           query(mid + 1 , end , 2 * node + 2 , x);
	       }
	   }
	   cnt += S[node];
      }
      void query(int x) {
           query(0 , n - 1 , 0 , x);
      }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n , q;
    cin >> n >> q;
    vector <int> a(n);
    for (auto & c : a) {
        cin >> c;
    } 
    sort(a.begin() , a.end());
    Segment_tree tree(n);
    while (q--) {
        int l ,  r;
	cin >> l >> r;
	tree.update( l , r);
    }
    vector <int> A;
    for (int i = 0; i < n; i++) {
        tree.query(i);
	A.push_back(cnt);
	cnt = 0;
    }
    sort(A.begin() , A.end());
    assert(A.size() == n);
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
         ans += (A[i] * a[i]);
    }
    cout << ans << "\n";
    return 0;
}
