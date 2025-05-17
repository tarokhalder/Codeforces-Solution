//link :https://codeforces.com/contest/313/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    vector <int> prefix(int(a.size()) , 0);
    int cnt = 0;
    for (int i = 1; i < int(a.size()); i++) {
        if (a[i] == a[i - 1]) {
	   cnt++;
	}
	prefix[i] = cnt;
    }
    int n;
    cin >> n;
    while (n--) {
        int x , y;
	cin >> x >> y;
	x-- , y--;
	if (x == 0) {
           cout << prefix[y] <<"\n";
        }else{
	   cout << prefix[y] - prefix[x] << "\n";
	}
    }
    return 0;

}
