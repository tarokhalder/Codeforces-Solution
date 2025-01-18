#include <bits/stdc++.h>

using namespace std;

int main() {
    int node;
    cin >> node;
    map<int, vector <int>>mp;
    int root;
    for (int i = 2; i <= node; i++) {
        cin >> root;
	mp[root].push_back(i);
    }
    bool ok = true;
    for (auto [x,y] : mp ){ 
       int size = mp[x].size();
       for (int k : mp[x]) {
          if (mp.count(k)){
	     size--;		  
	  }
       }
       if (size < 3){
          ok = false;
	  break;
       }
    }
    cout << ( ok ? "Yes" : "No" ) << endl;
    return 0;
}
