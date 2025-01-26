#include <bits/stdc++.h>

using namespace std; 

int main() {
   int n , m;
   cin >> n >> m;
   if ( m== 0) {
      cout << 1 << endl;
   }
   else if (n % 2 == 0) {
       int d = n / 2;
       if (m <= d) {
          cout << m << endl;
       }
       else{
          cout << n - m << endl;
       }
   }
   else{
      int d = n / 2;
      
      if ( m <= d) {
         cout << m << endl;
      }
      else if(d + 1 == m) {
         cout << d << endl;         
      }
      else{
         cout << n - m << endl;
      }
   }
   return 0;
}
