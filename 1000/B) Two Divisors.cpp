#include <bits/stdc++.h>

using namespace std;

int64_t gcd(int64_t a , int64_t b) {
    if(b == 0) {
       return a;
    }
    return gcd(b , a%b);
}

int64_t lcm(int64_t x , int64_t y) {
    return ((x*y) / gcd(x,y));
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int64_t x , y;
      cin >> x >> y;
      int64_t ans = lcm(x,y);
      if(x == ans || y == ans) {
         ans *= (y / x);
      }

      cout << ans << endl;
   }
   return 0;
}
