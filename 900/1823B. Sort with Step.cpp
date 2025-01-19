#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int tt;
    cin >> tt;
    while (tt--) {
        int N , k;
	cin >> N >> k;
	vector <int> a(N);
	for (auto & c : a) {
	    cin >> c;
	}
	vector <pair <int,int>> pp(N);
	for (int i = 0; i < N; i++) {
	   pp[i] = make_pair(a[i] , i+1);
	}
	
	sort(pp.begin() , pp.end());
	
	int cnt = 0;
	
	for (int i = 0; i < N; i++) {
	   int d = abs(pp[i].first - pp[i].second);
	   if ( d % k != 0) {
	      cnt++;
	   }
	}
	if (cnt == 0) {
	   cout << 0 << endl;
	}
	else if( cnt == 2) {
	   cout << 1 << endl;
	}
	else{
	   cout << -1 << endl;
	}
		
	

    }

    return 0;
}
