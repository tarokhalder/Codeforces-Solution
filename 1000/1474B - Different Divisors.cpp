#include <bits/stdc++.h>

using namespace std;

#define int int64_t

vector <int> prime;

void seive() {
    vector <bool> dis(1000005, true);
    for(int i = 2; i <= sqrt(1000005); i++) {
        for (int j = i * i; j <= 1000005; j += i) {
	     if (dis[j] == true) {
	         dis[j] = false;
	     }
	}
    }
    for (int i = 2; i <= 1000005; i++) {
        if (dis[i] == true) {
	    prime.push_back(i);
	}
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    seive();
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
	cin >> n;
        int d = n + 1;
	vector <int> :: iterator p1 , p2;
	p1 = lower_bound(prime.begin() , prime.end() , d);
	int e = (*p1) + n;

	p2 = lower_bound(prime.begin() , prime.end() , e);

	cout << (*p1) * (*p2) << endl;
	
    }

    return 0;
}
