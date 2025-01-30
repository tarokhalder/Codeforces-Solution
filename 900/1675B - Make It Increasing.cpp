#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
       int N;
       cin >> N;
       vector <int> a(N);
       for (auto & c : a) {
           cin >> c;
       }
       int cnt = 0;
       for (int i = 0; i < N; i++) {
         for (int j = 0; j < N-1; j++) {
	    if(a[j] >= a[j+1]) {
		while (a[j] >= a[j+1] && a[j] > 0) {
		   cnt++;
		   a[j] = round(a[j]/2);
		}
	    }
	 
	 }

       }
       bool ok = true;
       for(int i = 0; i < N-1 && ok; i++) {
          if (a[i] == a[i+1]) {
	      ok = false;
	  }
       }
       cout <<(ok ? cnt : -1) << endl;
     
    }
    return 0;
}
