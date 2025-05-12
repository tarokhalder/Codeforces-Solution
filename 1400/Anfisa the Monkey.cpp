//Link : https://codeforces.com/contest/44/problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k , a , b;
    cin >> k >> a >> b;
    string c;
    cin >> c;
    int n = int(c.size());
    if ( n < k * a || n > k * b){
       cout << "No solution" << "\n";
    }else{
        int extra = n - (k * a);
	vector <string> ans;
	for (int i = 0; i < n; ) {
	    string d = c.substr(i , a);
	    i += a;
	    while (d.size() < b && extra > 0) {
	       d += c[i];
	       extra -= 1;
	       i++;
	    }
	    ans.push_back(d);

	}
	for (string a: ans) {
	    cout << a << "\n";
	}
    }
    return 0;
}
