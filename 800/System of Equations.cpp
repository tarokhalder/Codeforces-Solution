#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n , m;
    cin >> n >> m;
    set <pair<int,int>> pp;
    for (int i = 0; i <= n; i++) {
        int a = sqrt(n-i);
	if(a*a + i == n) {
	   pp.insert(make_pair(a , i));
	}
    }
    int cnt = 0;
    for (auto [x,y] : pp) {
       if( x + y * y == m) {
          cnt++;
       }
    }
    cout << cnt << endl;
}
