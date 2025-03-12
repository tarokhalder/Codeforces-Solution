#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int a , b , c , d;
	cin >> a >> b >> c >> d;
	cout << ( (a^b) == 0 && (b^c) == 0 && (c^d) == 0 ? "Yes" : "No") << "\n";
    }
    return 0;
}
