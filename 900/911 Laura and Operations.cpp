#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
       int a , b , c;
       cin >> a >> b >> c;
       cout << ((b + c) % 2 == 0 ? 1 : 0 ) << " " ;
       cout << ((a + c) % 2 == 0 ? 1 : 0 ) << " ";
       cout << ((b + a) % 2 == 0 ? 1 : 0 ) << " " << endl;
   }
   return 0;
}
