#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    cin.ignore();
    while (tt--) {
         string a;
	 cin >> a;
	 vector <int> upper , lower;
	 vector <bool> check(int(a.size()) , false);
	 for (int i = 0; i < int(a.size()); i++) {
	     if(a[i] == 'B'){
	         if(!upper.empty()) {
		   upper.pop_back();
		 }
	     }
	     else if(a[i] == 'b'){
	         if(!lower.empty()) {			 
		    lower.pop_back();
		 }
	     }
	     else{
	        if(isupper(a[i])) {
		    upper.push_back(i);
		}
		else{
		  lower.push_back(i);
		}
	     }

	 }
	 for (int i = 0; i < upper.size(); i++) {
	     check[upper[i]] = true;
	  }
	 for (int i = 0; i < lower.size(); i++) {
	     check[lower[i]] = true;
	 }
	 string ans = "";
	 for (int i = 0; i < int(check.size()); i++) {
	      if(check[i]) {
	         ans += a[i];
	      }
	 }

	 cout << ans << endl;

    }
    return 0;
}
