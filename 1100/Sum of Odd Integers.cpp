#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
       int64_t n , k;
       cin >> n >> k;
       if((n % 2 == 0 && k & 1) || (n & 1 && k % 2 == 0)){
          cout << "NO" << "\n";
       }else{
          cout << (k*k <= n ? "YES" : "NO") << "\n";
       }
    }
    return 0;
}
