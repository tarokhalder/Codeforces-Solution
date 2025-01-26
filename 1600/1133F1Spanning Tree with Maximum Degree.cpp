#include <bits/stdc++.h>
using namespace std;

vector <int> arr[800000];
int vis[800000];
void BFS(int node){
  queue<int> q;
  q.push(node);
  vis[node]=1;
  while(!q.empty()){
      int cur=q.front();
      q.pop();
      for(auto x:arr[cur]){
         if(vis[x]==0){
	    q.push(x);
	    vis[x]=1;
	    cout <<cur<<" "<<x<< endl;
	 }
      }
  }
}

int main(){
   int node,edge;
   cin >> node >> edge;
   while(edge--){
     int x,y;
     cin >> x >> y;
     arr[x].push_back(y);
     arr[y].push_back(x);
   }
   int maxdegree=0,maxnode=INT_MIN;
   for(int i=1; i<=node; i++){
      if(arr[i].size()>maxdegree){
         maxdegree=arr[i].size();
	 maxnode=i;
      }
   }
   BFS(maxnode);
}
