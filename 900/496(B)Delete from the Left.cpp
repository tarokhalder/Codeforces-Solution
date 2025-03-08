#include <bits/stdc++.h>

using namespace std;

int main() {
   string a , b;
   cin >> a >> b;
   //int size = int(a.size() + b.size());
   while (a.back() == b.back() && (!a.empty() && !b.empty())) {
       a.pop_back();
       b.pop_back();
   }
   cout <<int(a.size() + b.size()) << endl;
   return 0;
}
