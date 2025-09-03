#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int l , r;
	cin >> l >> r;
	if (l == r) {
	   if (r % 2 == 0 && r > 2) {
	      cout << r / 2 << " " << r / 2 << "\n";
	   } else {
	       int d = INT_MIN;
	       for (int i = 2; i * i <= r; i++) {
	          if (r % i == 0) {
		      d = i;
		      break;
		  }
	       }
	       if (d == INT_MIN) {
	          cout << -1 << "\n";
	       } else {
	          int N = r / d;
		  int s = d / 2;
		  int k = s;
		  if (d & 1) {
		     k++;
		  }
		  assert((N * s) + (k * N) == r);
		  cout << N * s << " " << k * N << "\n";
	       }
	   }
	} else {
	   if (r & 1) {
	     r--;
	   }
	   if (r > 2) {
	      cout << r / 2 << " " << r / 2 << "\n";
	   } else {
	      cout << -1 << "\n";
	   }
	}
    }
}
