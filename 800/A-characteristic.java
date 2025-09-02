//https://codeforces.com/problemset/problem/1823/A
import java.util.Scanner;

public class Main{
     public static void main(String args[]) {
         Scanner in = new Scanner(System.in);
	 int tt = in.nextInt();
	 while (tt-->0) {
	     int n = in.nextInt();
	     int s = in.nextInt();
	     int [] a = new int[n];
	     for (int i = 0; i < n; i++) {
	         a[i] = 1;
	     }
	     boolean ok = false;
	     for (int i = 0; i < n; i++) {
		 int cnt = 0;  
	         for (int j = 0; j < n; j++) {
		   for (int k = j + 1; k < n; k++) {   //(n ^ 3)
		      if (a[j] * a[k] == 1) {
		         cnt++;
		      }
		   }
		 }
		 if (cnt == s) {
		   ok = true;
		   break;
		 } else {
		    a[i] = -1;
		 }
	     }
	     if (ok) {
		 System.out.println("YES");    
	         for (int i = 0; i < n; i++) {		 
		     System.out.print(a[i] + " ");
		 }
		  System.out.println();

	     } else {
	         System.out.println("NO");
	     }
	 }
     }
}
