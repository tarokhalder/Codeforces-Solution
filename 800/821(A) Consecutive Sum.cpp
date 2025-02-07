#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {
    int tt;
    cin >> tt;
    while (tt--) {
       int n , k;
       cin >> n >> k;
       vector <int> a(n);
       for(auto & c : a) {
          cin >> c;
       }
       for(int i = 0; i < n; i++) {
         for(int j = 0; j+k < n; j++) {
	    if(a[j] > a[j+k]) {
	       swap(a[j] , a[j+k]);
	    }
	 }
       }
       int ans = 0;
       for(int i = n-1 ; i >= 0 && k--; i--) {
           ans += a[i];
       }

       cout << ans << endl;
    }
    return 0;
}
