#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
         int n;
	       cin >> n;
	       string a;
	       cin >> a;
	       int s = 0 , e = int(a.size())-1;
	       bool ok = true;
	       while ( s < e) {
	          int d = abs(a[s] - a[e]);
	          if (d != 0 && d != 2){
	             ok = false;
		           break;
	         }
	         s++;
	         e--;
	       }

	       cout << ( ok ? "YES" : "NO" ) << endl;
    }
    return 0;
}
