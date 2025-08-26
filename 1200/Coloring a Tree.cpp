//https://codeforces.com/problemset/problem/902/B
//https://codeforces.com/contest/902/submission/335601095
#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 5;

vector <int> G[N];

int bfs(int node , vector <int> & C) {
    queue <int> q;
    int cnt = 1;
    q.push(node);
    while(!q.empty()) {
        int cur = q.front();
	q.pop();
	for (int x : G[cur]) {
	   if (C[x - 1] != C[cur - 1]) {
	      cnt += 1;
	   }
	   q.push(x);
	}
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    int n;
    cin >> n;
    vector <int> a(n - 1) , C(n);
    for (auto & c : a) {
         cin >> c;
    }
    for (auto & c : C) {
        cin >> c;
    }
    for (int i = 0; i < n - 1; i++) {
        G[a[i]].push_back(i + 2);
    }
    cout << bfs(1 , C) << "\n";
    return 0;
}
