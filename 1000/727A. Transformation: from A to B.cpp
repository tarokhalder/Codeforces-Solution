#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int a , b;
    cin >> a >> b;
    vector <int> ans;
    ans.push_back(b);
    while( a != b && a <= b) {
       if (b % 2 == 0) {
          b /= 2;
	  ans.push_back(b);
       }
       else if(b % 10 == 1) {
            b /= 10;
            ans.push_back(b);

	  
       }
       else{
          break;
       }
       
    }
    sort(ans.begin() , ans.end());
    if(ans[0] != a) {
       cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
      cout << int(ans.size())<<endl;
      for (int x: ans) {
         cout << x << " ";
      }
      cout << endl;
    }

    return 0;
}
