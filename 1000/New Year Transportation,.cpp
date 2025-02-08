#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {
    int n , t;
    cin >> n >> t;
    vector <int> a(n);
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    bool ok = false;
    int s = 1;
    while ( s <= t) {
      if(s==t) {
        ok = true;
      }
      s += a[s];
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
