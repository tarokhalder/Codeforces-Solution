#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
       int n;
       string a;
       cin >> n >> a;
       n = int(a.size());
       string s;
       if (a[0] > '7') {
          string d(n+1 , '1');
	  s = d;
       }else{
          string d(n , char(a[0] + 2));
	  s = d;
       }
       int carry = 0;
       string ans;
       int N = min(int(s.size()) , int(a.size()));
       int i = int(s.size() - 1);
       int j = int(a.size() - 1);
       while (N--) {
          int last = a[j] - '0' + carry;
	  int fast = s[i] - '0';
	  if (fast >= last) {
	     int I = fast - last;
	     ans.push_back(I % 10 + '0');
	     carry = I / 10;
	  }else{
	     fast += 10;
	     int I = fast - last;
	     ans.push_back(I + '0');
	     carry = 1;
	  }
	  i--;
	  j--;
       }
       reverse(ans.begin() , ans.end());
       cout << ans << "\n";
    }
    return 0;
}
