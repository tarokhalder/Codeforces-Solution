#include <bits/stdc++.h>

using namespace std;

bool correct(char a[4][4] , int i , int j ,char d) {
    if ( i >=0 && j>=0) {
        a[i][j] = d;
    }	
    for (int i = 0; i < 4-1; i++) {
       for (int j = 0; j < 4-1; j++) {
           if (a[i][j] == '#' && a[i][j+1] == '#' && a[i+1][j] == '#' && a[i+1][j+1] == '#') {
	        return false;
	   }
	   else if (a[i][j] == '.' && a[i][j+1] == '.' && a[i+1][j] == '.' && a[i+1][j+1] == '.') {
	        return false;
	   }

       }
    }
    return true;

}
int main() {
    char a[4][4];
    for (int i = 0; i < 4; i++) {
       string c;
       cin >> c;
       for (int j = 0; j < int(c.size()); j++) {
           a[i][j] = c[j];
       }
    }
    bool ok = true;
    ok = correct(a, -1 , -1 , 't');
    if (ok) {
        for (int i = 0; i < 4 && ok; i++) {
	   for (int j = 0; j < 4 && ok; j++) {
	       char d = a[i][j];
	       if (ok) {
	           if (a[i][j] == '#') {
		     ok = correct(a , i , j , '.') ;
	             a[i][j] = '#';		     
		   }
		   else if (a[i][j] == '.') {
		      ok = correct(a, i , j , '#');
		      a[i][j] = '.';
		   }
	       }
	   }
	}
    
    }
    cout << ( ok ? "NO" : "YES" ) << endl;
    return 0;
}
