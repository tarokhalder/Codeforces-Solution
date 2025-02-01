#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n;
    cin >> n;
    vector <int> a(n) , b;
    for (auto & c : a) {
        cin >> c;  
    }
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        if(mp.count(a[i])){
	   mp[a[i]]++;
	}
	else{
         if(mp.size() ==1) {		
	   b.push_back(mp.begin()->second);
	 }
	   mp.clear();
	   mp[a[i]]++;
	}
    }
    if(mp.size() ==1) {		
       b.push_back(mp.begin()->second);
    }
    
    int ans = 0;
    for (int i = 0; i < b.size() - 1; i++) {
        int d = min(b[i] , b[i+1]);
	ans = max(ans , d*2);
    }
    cout << ans << endl;
    return 0;

}
