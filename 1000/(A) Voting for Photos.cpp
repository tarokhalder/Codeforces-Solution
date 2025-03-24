#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto & c : a) {
       cin >> c;
    }
    map <int ,int > mp , m;
    for (int x : a) {
       mp[x]++;
    }
    int mx = -1;
    for (auto [x , y] : mp) {
       mx = max(mx ,y);
    }
    int ans;
    bool ok = true;
    for (int i = 0; i < n && ok; i++) {
        m[a[i]]++;
	for (auto [x , y]:m) {
	   if (y == mx) {
	      ans = x;
	      ok = false;
	      break;
	   }
	}
    }
    cout << ans << "\n";
    return 0;
}
