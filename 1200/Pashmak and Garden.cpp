#https://codeforces.com/contest/459/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
       int d = abs(y1 - y2);
       cout << x1 + d << " " << y1 << " " << x2 +d << " " << y2 << "\n";
    } else if(y1 == y2) {
       int d = abs(x1 - x2);
       cout << x1 << " "<<y1 +d << " " << x2 << " " << y2 + d << "\n";
    } else{
        if (abs(x1 - x2) == abs(y1 - y2)) {
          if (x2 < x1) {
	     swap(x1 , x2);
	     swap(y1 , y2);
	  }		
          if (y1 < y2){	
	    cout << x1 << " "<< y1 + abs(x1 - x2) << " " << x1 + abs(x1 - x2) << " "<<y1 << "\n";
	  } else {
	      cout << x2 << " "<< y2 + abs(x1 - x2) << " "<< x1 << " " << y1 - abs(x1 - x2) << "\n";
	  }
	} else {
	    cout << -1 << "\n";
	}
    }
    return 0;
}
