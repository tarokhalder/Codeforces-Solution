#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int64_t choice(vector <int> mid , vector <int> another){
   for (int i = int(mid.size() - 1); i >= 0 && !another.empty(); i--) {
      if(another.back() < mid[i]) {
         mid[i] = another.back();
	 another.pop_back();
      }
      
   }   
   return accumulate(mid.begin() , mid.end() , 0LL);
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
       int n , x , y;
       cin >> n >> x >> y;
       x--;
       y--;
       vector <int> left , mid , right;
       int sum = 0;
       for(int i = 0; i < n; i++) {
          int l;
	  cin >> l;
	  if(i >= x && i <= y) {
	     mid.push_back(l);
	     sum += l;
	  }
	  else if( i < x) {
	     left.push_back(l);
	  }
	  else{
	     right.push_back(l);
	  }
       }
       sort(mid.begin() , mid.end());
       sort(left.rbegin() , left.rend());
       sort(right.rbegin() , right.rend());
      
       int ans = min(choice(mid , left) , choice(mid , right));

       cout << min(ans , sum) << endl;

    }
    return 0;
}
