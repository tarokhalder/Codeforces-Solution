#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int N;
	cin >> N;
	vector <int> a(N); // a contains piranhas size
	for (auto & c : a) {
	    cin >> c;
	}
        int mx = 0;
        for (int i = 0; i < N; i++) {
	    mx = max(mx , a[i]);
	}
        int ans = -1;
	// index 0 and N-1 check before iteration
	if (a[0] == mx && a[1] != mx) {
	   ans = 1;
	}
	else if (a[N-1] == mx && a[N-2] != mx) {
	   ans = N;
	}
        for (int i = 1; i < N-1; i++) {
	   if (a[i] == mx && a[i-1] != mx ) {
	       ans = i+1;
	       break;
	   }
	   else if (a[i] == mx && a[i+1] != mx ) {
	        ans = i+1;
		break;
	   }
	}

	cout << ans << endl;
    }
    return 0;
}
