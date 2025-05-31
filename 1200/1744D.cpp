//#https://codeforces.com/contest/1744/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
	cin >> n;
	vector <int> a(n);
	for (auto & c : a) {
	    cin >> c;
	}
	int cnt = 0;
	vector <int> B;
	auto fn = [](int n)-> int{
	   int cnt = 0;
	   while (n % 2 == 0) {
	       cnt += 1;
	       n /= 2;
	   }
	   return cnt;
	};
	for (int i = 0; i < n; i++) {   // Linear time(N);
	    if(i & 1) {
	       B.push_back(fn(i + 1));
	    }
	    cnt += fn(a[i]);
	}
	if (cnt >= n) {
	   cout << 0 << "\n";
	} else{
	   int ans = 0;	
	   sort(B.begin() , B.end());   // n = B.size()  n log (n)
	   for (int i = int(B.size() - 1); i >= 0; i--) {
	       if (cnt >= n) {
	         break;
	       }
	       cnt += B[i];
	       ans += 1;
	   }
	   if (n > cnt) {
	      cout << -1 << "\n";
	   } else {
	      cout << ans << "\n";
	   }
	}
    }
    return 0;
}
