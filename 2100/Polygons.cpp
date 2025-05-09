//Link : https://codeforces.com/contest/166/problem/B
#include <bits/stdc++.h>

using namespace std;

#define int int64_t

struct Point{
      int x , y;
      bool operator < (Point p) const{
         if (x == p.x) {
	    return y < p.y;
	 }
	 return x < p.x;
      }
      bool operator == (Point p) const {
         if (p.x == x && y == p.y) {
	    return true;
	 }
	 return false;
      }
};

bool cw(Point a , Point b , Point c) {
    return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) > 0;
}
bool ccw(Point a , Point b , Point c) {
    return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) < 0;
}
bool cl(Point a , Point b , Point c) {
    return a.x * (c.y - b.y) + b.x * (a.y - c.y) + c.x * (b.y - a.y) == 0;
}


vector <Point> convex(vector <Point> & a){
    if (a.size() <= 3) {
       return a;
    }
    sort(a.begin() , a.end());
    Point first = a.front() , last = a.back();
    vector <Point> up , down;
    up.push_back(first);
    down.push_back(first);

    for (int i = 1; i < int(a.size()); i++) {
        if (i == a.size() - 1 || !ccw(first ,a[i] , last)){
	    while (up.size() >= 2 && ccw(up[up.size() - 2] , up[up.size()-1] , a[i]) ){
	        up.pop_back();
	    }
	    up.push_back(a[i]);
	}
	if (i == a.size() - 1 || !cw(first , a[i] , last)) {
	    while (down.size() >= 2  && cw(down[down.size() - 2] , down[down.size() - 1] , a[i])){
	         down.pop_back();
	    }
	    down.push_back(a[i]);
	}
    }
    a.clear();
    for (int i = 0; i < int(up.size()); i++) {
        a.push_back(up[i]);
    }
    for (int i = 0; i < int(down.size()); i++) {
        a.push_back(down[i]);
    }
    unique(a.begin() , a.end());
    return a;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);    
    vector <Point> a , b;
    int n , x , y;
    cin >> n;
    while (n--) {
       cin >> x >> y;
       a.push_back({x , y});
    }
    cin >> n;
    while (n--) {
       cin >> x >> y;
       b.push_back({x , y});

    }
    for (int i = 0; i < int(b.size()); i++) {
        a.push_back(b[i]);
    }
    vector <Point> L = convex(a);
    set <Point> st(L.begin() , L.end());
    bool ok = true;
    for (int i = 0; i < int(b.size()) && ok; i++) {
        if (st.count(b[i])) {
	   ok = false;
	}
    }
    cout << ( ok ? "YES" : "NO" ) << "\n";
    return 0;
}
