#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int N;
	cin >> N;
	vector <int> a(N);
	for (auto & c : a) {
	    cin >> c;
	}
	vector <pair <int,int>> pp(N);
	for (int i = 0; i < N; i++) {
	   pp[i] = make_pair(a[i] , i+1);
	}
	sort(pp.begin() , pp.end());
	cout << pp[0].second << " " << pp[N-1].second << endl;
    }
    return 0;
}
