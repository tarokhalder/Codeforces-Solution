//https://codeforces.com/contest/160/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    array <int , 10> L , H;
    L.fill(0);
    H.fill(0);
    for (int i = 0; i < n; i++) {
        int d = a[i] - '0';
	L[d]++;
    }
    for (int i = n; i < n + n; i++) {
       int d = a[i] - '0';
       H[d]++;
    }
    bool ok = true , o = ok;
    for (int i = 0; i < n; i++) {
        int d = a[i] - '0';
	bool found = true;
	for (int j = d + 1; j < 10; j++) {
	     if (H[j] > 0) {
	        H[j]--;
		found = false;
		break;
	     }
	}
	if (found) {
	   ok = false;
	}
    }
     for (int i = n; i < n + n; i++) {
        int d = a[i] - '0';
	bool found = true;
	for (int j = d + 1; j < 10; j++) {
	     if (L[j] > 0) {
	        L[j]--;
		found = false;
		break;
	     }
	}
	if (found) {
	   o = false;
	}
    }
    cout << ( o | ok ? "YES" : "NO" ) << "\n";
    return 0;

}
