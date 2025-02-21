#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
       int n , d;
       cin >> n >> d;
       vector <int> a(n);
       for (auto & c : a ) {
          cin >> c;
       }
       map<int,int> mp;
       for (int i = 0; i < n; i++) {
          mp[a[i]]++;
       }
       int t = 0;
       for (auto [x,y] : mp) {
          if(x == t) {
	     if(y > 1) {
	        mp[d+x] += (y-1);
	     }
	     t++;
	  }
	  else{
	    break;
	  }
	  
       }
       cout << t << endl;
    }
    return 0;
}
