//https://codeforces.com/contest/1872/problem/D
#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int gcd(int a , int b) {
    if (b == 0) {
       return a;
    }
    return gcd(b , a % b);
}
int lcm(int a , int b) {
    return (a * b) / gcd(a , b);
}

int sum(int n , int x) {
    int T = (n * (n + 1)) / 2;
    x = n - x;
    int S = (x * (x + 1)) / 2;
    assert(T - S >= 0);
    return T - S;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int n , x , y;
	cin >> n >> x >> y;
	if (x == y) {
	   cout << 0 <<"\n";
	} else {
	     int G = n / x;
	     int B = n / y;
	     int l = lcm(x , y);
	     l = n / l;
	     G -= l;
	     B -= l;
	     cout << sum(n , G) - ((B * (B + 1)) / 2)<< "\n";
	}
    }
    return 0;
}
