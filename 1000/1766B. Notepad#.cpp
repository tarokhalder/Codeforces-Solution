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
	n = int(a.size());
	bool ok = true;
	for (int i = 0; i < n && ok; i++) {
	   int m = min (2 , n-i);
	   if ( m != 2) {
	      continue;
	   }
	   string d  = a.substr(i,m);
	   for(int j = 0; j < n && ok; j++) {
	       if ( abs(i-j) < 2){
		  continue;
	       }
	       int k = min(2,n-j);
	       if ( k!= 2) {
	          continue;
	       }
	       string h = a.substr(j,k);
	       if ( h == d) {
	          ok = false;
	       }
	   }
	}
	cout << ( ok ? "NO" : "YES" ) << endl;
    }
    return 0;
}
