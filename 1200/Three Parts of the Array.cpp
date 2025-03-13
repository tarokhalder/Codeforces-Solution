#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto & c : a) {
        cin >> c;
    }
    map<int ,int> prefix , suffix;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
	prefix[sum] = i;
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += a[i];
	suffix[sum] = i;
    }
    int ans = 0;
    for (auto [x,y]: prefix) {
       if (suffix.count(x)) {
         if(prefix[x] < suffix[x]) {
	    ans = max(ans , x);
	 }		       
       }
    }
    cout << ans << endl;
    return 0;
}
