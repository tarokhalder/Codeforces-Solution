#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    map <char , int> mp;
    for(char x : a) {
       mp[x]++;
    }
    bool ok = false;
    for(auto [x,y] : mp) {
      if( y >= 2) {
         ok = true;
	 break;
      }
    }

    cout << (ok || mp.size() == 1? "Yes" : "No" ) << endl;
    return 0;
}
