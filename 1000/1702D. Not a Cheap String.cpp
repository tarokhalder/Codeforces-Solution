#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
         string a , k;
	 cin >> a;
	 k = a;
	 int n;
	 cin >> n;
	 int cost  = 0;
	 vector <int> add(27 , 0);
	 for (int i = 0; i < int(a.size()); i++) {
	     cost += (a[i] - 97 +1);
	     int l = a[i] - 96;
	     add[l]++;
	 }
	 if (cost <= n ){
	    cout << a << endl;
	    continue;
	 }
	 sort (k.rbegin() , k.rend());
	 int N = int(k.size());
	 int s = 0;
	 while ( cost > n && s < N) {
	      int ct = k[s] - 97 +1;
              add[ct]--;
              cost -= ct;
	      s++;
		 
	 }
	 string news="";
	 for (int i = 0; i < int(a.size()); i++) {
	      int d = a[i] - 97+1;
	      if (add[d] > 0) {
	         news += a[i];
		 add[d]--;
	      }
	 }
	 if (news.empty()){
	     cout << endl;
	 }else{
	     cout << news << endl;
	 }
	
    }
    return 0;
}
