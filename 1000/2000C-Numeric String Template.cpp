#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
         int N;
	 cin >> N;
	 vector <int> a(N);
	 for (auto & c : a) {
	     cin >> c;
	 }
	 int test;
	 cin >> test;
	 while (test--) {
	     string b;
	     cin >> b;
	     int size_b = int(b.size());
	     if (size_b != N) {
	         cout << "NO" << endl;
		 continue;
	     }
	     map<int , char> mp;
	     for (int i = 0; i < N; i++) {
	        if (!mp.count(a[i])) {
		    mp[a[i]] = b[i];
		}
	     }
	     string  d="";
	     for (int i = 0; i < N; i++) {
	        d += mp[a[i]];
	     }
	     map<char ,int> mpr;
	     for (int i = 0; i < N; i++) {
	        if (!mpr.count(b[i])) {
		    mpr[b[i]] = a[i];
		}

	     }
	     vector <int> check;
	     for (int i = 0; i < N; i++) {
	         check.push_back(mpr[b[i]]);
	     }
	     bool ok = (check == a && d == b ? ok = true  : ok = false);
	    cout << ( ok ? "YES" : "NO" ) << endl;
	 }
    }
    return 0;
}
