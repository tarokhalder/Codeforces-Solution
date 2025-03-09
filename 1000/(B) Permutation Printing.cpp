#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
       int n;
       cin >> n;
       if (n == 1) {
          cout << 1 << endl;
       }else{
          int s = 1;
	  int e = n;
	  while (s < e) {
	    cout << s << " " << e << " ";
	    s++;
	    e--;
	  }
	  if(n & 1) {
	     cout <<((n+1) / 2) << endl;
	  }
	  else{
	     cout << endl;
	  }
       }
    }
    return 0;
}
