#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string a , b;
	cin >> a;
	b = a;
	int n = int(a.size()-1);
	char first = a[0];
	char last = a[n];
	for (int i = 0; i <= n; i++) {
	   if (a[i] != first && a[i] != last) {
	        a[i] = '(';
		b[i] = ')';
	   }
	}

	for (int i = 0; i <= n; i++) {
	   if (a[i] == first) {
	      a[i] = '(';
	      b[i] = '(';
	   }
	   else if (a[i] == last) {
	      a[i] = ')';
	      b[i] = ')';
	   }
	}
        
        stack <char> st;
	for (int i = 0; i <= n; i++) {
	    if (st.empty()) {
	        st.push(a[i]);
	    }
	    else if(a[i] == ')' && st.top() == '('){
	        st.pop();
	    }
	    else{
	       st.push(a[i]);
	    }
	}

	stack <char> h;
        for (int i = 0; i <= n; i++) {
	    if (h.empty()) {
	        h.push(b[i]);
	    }
	    else if(b[i] == ')' && h.top() == '('){
	        h.pop();
	    }
	    else{
	       h.push(b[i]);
	    }
	}
       	cout << (h.empty() || st.empty() ? "YES" : "NO" ) << endl;

	
    }

    return 0;
}
