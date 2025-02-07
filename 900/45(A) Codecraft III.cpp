#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> a = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string c;
    cin >> c;
    int n;
    cin >> n;
    int in;
    for(int i = 0; i < int(a.size()); i++) {
       if(a[i] == c) {
          in = i;
	  break;
       }
    }
    cout << a[(in+n)%12] << endl;
    return 0;
}
