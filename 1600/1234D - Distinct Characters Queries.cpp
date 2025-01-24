#include <bits/stdc++.h>

using namespace std;

struct Segmenttree{
     bitset <26 > st[4*100005];
     int n;
     void init(int n) {
        this -> n = n;
     }
     
     void build(int start , int end , int node , string & a) {
          if (start == end) {
	       st[node].set(a[start] - 'a');
	       return;    // base case
	  }
	  int mid = (start + end ) /2;
	  build(start , mid , 2*node+1 , a);
	  build(mid + 1 , end , 2 * node +2 , a);
	  st[node] = st[node * 2 + 1] | st[node * 2 + 2];

     }

     void build(string & a) {
         build(0 , int(a.size()-1) , 0 , a);
     }
     
     void update(int start , int end , int node , int index , char y){
          if( start == end) {
	     st[node].reset();
	     st[node].set(y - 'a');
	     return;
	  }
	  int mid = (start + end) / 2;
	  
	  if (index <= mid) {
	     update(start , mid , 2*node+1 , index , y);
	  }
	  else{
	      update(mid + 1 , end , 2*node+2 , index , y);

	  }
	  st[node] = st[node * 2 + 1] | st[node * 2 + 2];


     }
     void update(int x , char y) {
         update(0 , n-1 , 0 , x , y);
     }

     bitset<26> query(int start , int end , int node , int l , int r) {
          if(start > r || end < l) {
	     return bitset<26>();
	  }
	  if (start >= l && end <= r) {
	     return st[node];
	  }
	  int mid = (start + end) / 2;
	  bitset <26> q1 = query(start , mid , 2 * node + 1 , l , r);
	  bitset <26> q2 = query(mid + 1 , end , 2 * node + 2 , l , r);

	 
	  return q1 | q2;

     }

     int query(int l , int r){
         bitset <26> qq = query(0 , n-1 , 0 , l , r);
	 return (qq.count());
     }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int tt;
    string a;
    cin >> a >> tt;
    Segmenttree tree;
    tree.init(a.size());
    tree.build(a);
    while (tt--) {
       int x;
       cin >> x;
       if (x == 2) {
          int l , r;
	  cin >> l >> r;
	  l--;
	  r--;
	  cout << tree.query(l , r) << endl;
       }
       else{
           int l;
	   char y;
	   cin >> l >> y;
	   tree.update(l-1 , y);
       }
    }
    return 0;
}
