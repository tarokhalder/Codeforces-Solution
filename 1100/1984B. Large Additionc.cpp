#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        string a;
	cin >> a;
	bool ok = true;
	int carry = 0;
	for (int i = int (a.size() - 1);  i > 0 && ok; i--) {
	     int d = (a[i] - '0') - carry;
             if( d < 0) {
	        ok = false;
	     }
             d = 10 + d;
	     if(d > 18) {
	        ok = false;
	     }
	     carry = 1;
	}
	cout << ( (a[0]-'0') - carry == 0 && ok ? "YES" : "NO" ) << endl;
    }
    return 0;
}
