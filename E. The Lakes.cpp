//https://codeforces.com/contest/1829/problem/E
#include <bits/stdc++.h>

using namespace std;

int sum = 0;

void dfs(int i , int j , int n , int m , vector <vector <int>> & a , vector <vector<int>> & vis) {
	if (a[i][j] == 0) {
	  return;
	}
	vis[i][j] = 1;
	sum += a[i][j];
	if (i < n && j + 1 < m && vis[i][j + 1] == 0) {
	   dfs(i , j + 1 , n , m , a , vis);
	} 
       	if(i + 1 < n && j < m && vis[i + 1][j] == 0) {	
	   dfs(i + 1 , j , n , m , a ,vis);
	}
	if (i < n && j - 1 >= 0 && vis[i][j - 1] == 0) {
	   dfs(i , j - 1 , n , m , a , vis);
	}
	if (i - 1 >= 0  && j < m && vis[i - 1][j] == 0) {
	   dfs(i - 1 , j , n , m , a , vis);
	}

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int n , m;
	cin >> n >> m;
	vector <vector<int>> a(n , vector<int> (m)) , vis(n , vector<int> (m , 0));
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        cin >> a[i][j];
	    }
	}
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        if (vis[i][j] == 0) {
		   dfs(i , j , n , m , a , vis);
		}
		ans = max(sum , ans);
		sum = 0;
	    }
	}
	cout << ans << "\n";
    }
    return 0;
}
