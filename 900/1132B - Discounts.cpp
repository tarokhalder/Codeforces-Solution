#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {
    int N;
    cin >> N;
    vector <int> price(N);
    for(auto & c : price) {
       cin >> c;
    }
    int M;
    cin >> M;
    
    vector <int> discount(M);
    for (auto & c : discount) {
        cin >> c;
    }
    sort(price.rbegin() , price.rend());
    int sum = accumulate(price.begin() , price.end() ,0LL);

    for (int i = 0; i < M; i++) {
        cout << sum - price[discount[i] -1 ] << endl;
    }

    return 0;

}
