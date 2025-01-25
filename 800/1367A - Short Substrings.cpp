#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string a;
	cin >> a;
	string ans = a.substr(0,2);
	for (int i = 3; i < a.size(); i += 2) {
	    ans += a[i];
	}

	cout << ans << endl;
    }
    return 0;
}
