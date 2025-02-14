#include <bits/stdc++.h>
using namespace std;

int main(){
   string a;
   cin >> a;
   int ans=0;
   stack<char> st;
   for(int i=0; i<a.size(); i++){
      if(st.empty()){
          st.push(a[i]);
      }
      else if(a[i]==')' && st.top()=='('){
         ans+=2;
         st.pop();
      }
      else{
        st.push(a[i]);
      }
   }
   cout << ans << endl;
   return 0;
}
