//https://codeforces.com/contest/1821/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
	cin >> n;
	vector <int> a(n) , b(n);
	for (auto & c : a) {
	    cin >> c;
	}
	for (auto & c : b) {
	    cin >> c;
	}
	int F = -1 , L = -1;
	for (int i = 0; i < n; i++) {
	    if (a[i] != b[i]) {
	       if (F == -1) {
	          F = i;
	       }
	       L = i;
	    }
	}
	if (L == -1) {
	     cout << 1 << " " << n << "\n";
	} else {	
	     while (F - 1 >= 0 && b[F - 1] <= b[F] && b[F - 1] == a[F- 1]) {
	        F--;
	     }	
	     while (L + 1 < n && b[L + 1] >= b[L] && b[L + 1] == a[L + 1]){
	         L++;
	     }   
	     cout << F + 1 << " " << L + 1 << "\n"; 
	}
    }
    return 0;
}
