#include <bits/stdc++.h>

using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);   
   int tt;
   cin >> tt;
   while (tt--) {
      int N;
      cin >> N;
      vector <int> a(N) , b(N);
      for (auto & c : a) {
          cin >> c;
      }
      for (auto & c : b) {
         cin >> c;
      }
      sort(a.begin() , a.end());
      sort(b.begin() , b.end());
      for (int i = 0; i < N; i++) {
         auto it = lower_bound(b.begin() , b.end() , a[i]);    /// N(log(N))
	 if (*it == a[i] && it != b.end()) {
	    b.erase(it);
	    continue;
	 }
	 auto t1 = lower_bound(b.begin() , b.end() , a[i]+1);
	 if ( *t1 == a[i] +1 && t1 != b.end()) {
	    b.erase(t1);
	 }

      }
      cout <<( b.empty() ? "YES" : "NO" ) << endl;
   }
   return 0;
}
