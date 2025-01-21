#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
       int n;
       cin >> n ;      
       string a;
       cin >> a;
       int s = 0, e = n-1;
       vector <int> d;
       while( s < e) {
          if(a[s] != a[e]) {
	    d.push_back(e);
	  }
	  s++;
	  e--;
       }
       bool ok = true;
       for(int i = 0; i < int(d.size())-1; i++) {
          if(abs(d[i] - d[i+1]) > 1){
	      ok = false;
	      break;
	  }
       }
       cout << (ok ? "Yes" : "No" ) << endl;
    }

    return 0;
}
