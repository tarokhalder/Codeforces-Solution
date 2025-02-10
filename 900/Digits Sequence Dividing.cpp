#include <bits/stdc++.h>
//https://codeforces.com/contest/1107/problem/A
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
	string a;
	cin >> a;
	if(n == 2 && a[0] >= a[1] ) {
	   cout << "NO" << endl;
	}
	else{
	   cout << "YES \n2" << endl;
	   cout << a[0] << " " << a.substr(1 , int(a.size()-1)) << endl;

	}
    } 
    return 0;  
}
