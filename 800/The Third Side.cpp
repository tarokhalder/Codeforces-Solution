#include <bits/stdc++.h>

using namespace std;

int main() {
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      vector <int> a(n);
      for (auto & c : a) {
         cin >> c;

      }
      sort(a.begin() , a.end());
      int d = a[0];
      for (int i = 1; i < n; i++) {
         a[i] = a[i] + a[i-1] - 1;
	 d = max(d , a[i]);
      }
      cout << d << endl;
   }
   return 0;
}
