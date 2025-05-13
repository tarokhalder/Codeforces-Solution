//Link : https://codeforces.com/contest/1765/problem/M
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
	cin >> n;
	if (n % 2 == 0) {
	   cout << (n / 2) << " " << (n/2) << "\n";
	} else{
	    int s = 0;
	    for (int i = 1; i <= sqrt(n); i++) {
	        if (n % i == 0) {
		   s = i;
		}
		if(s > 1) {
		   break;
		}
	    }
	    if (s == 1) {
	       cout << 1 << " " << n - 1 << "\n";
	    } else{
	       int one = (s / 2) * ( n / s);
	       int two = n - one;
	       if(one > two) {
	          swap(one , two);
	       }
	       int gc = __gcd(one , two);
	       while ( two % one != 0 && one > 0 ) {
	           one -= gc;
		   two += gc;
	       }
	       cout << one << " " << two << "\n";
	    }
	}
    }
    return 0;
}
