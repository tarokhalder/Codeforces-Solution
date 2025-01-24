#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t  main() {
     ios_base::sync_with_stdio(false); 
     cin.tie(nullptr);     
     int n , k;
     cin >> n >> k;
     vector <int> div;
     for (int i = 1;  i <= sqrt(n); i++) {
         if (n % i == 0) {
	    div.push_back(i);
	    if (n/i != i) {
	       div.push_back(n/i);
	    }
	 }
     }
     sort(div.begin() , div.end());
     cout << (div.size() < k ? -1 : div[k-1]) << endl;
     return 0;
}
