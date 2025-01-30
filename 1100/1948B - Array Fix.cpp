#include <bits/stdc++.h>

using namespace std;

int main() {
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
      for(int i = 0; i < a.size(); i++) {
          for (int j = 0; j < a.size()-1; j++) {
	      if (a[j] > a[j+1] && a[j] > 9) {
	          int d = a[j] % 10;
		  int e = a[j] / 10;
		  a[j] = d;
		  a.insert(a.begin() + j , e);
	      }
	  }
      }
      cout << (is_sorted(a.begin() , a.end()) ? "YES" : "NO" ) << endl;

   }
   return 0;
}
