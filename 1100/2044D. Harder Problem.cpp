#include <bits/stdc++.h>

using namespace std;

int main() {
   int tt;
   cin >> tt;
   while (tt--) {
      int N;
      cin >> N;
      vector <int> a(N) , b(N+1 , 0);
      set <int> st;
      for (int i = 0; i < N; i++) {
          cin >> a[i];
	  st.insert(a[i]);
      }
      for (auto it : st) {
          b[it]++;
      }
      vector <int> fine;
      for (int i = 1; i <= N; i++) {
        if (b[i] == 0) {
	    fine.push_back(i);
	}
      }
      vector <int> ans(N);
      map<int,int> mp;
      for (int i = 0; i < N; i++) {
         int d = a[i];
	 if (mp.count(d)) {
	     ans[i] = fine.back();
	     fine.pop_back();
	 }
	 else{
	    ans[i] = a[i];
	    mp[d]++;
	 }
      }
      for (auto c : ans) {
         cout << c << " ";
      }
      cout << endl;
   }
   return 0;
}
