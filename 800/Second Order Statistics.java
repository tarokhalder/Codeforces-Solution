//https://codeforces.com/contest/22/problem/A
import java.util.Scanner;
import java.util.Arrays;

public class Main{
     public static void main(String args[]) {
          Scanner in = new Scanner(System.in);
	  int n = in.nextInt();
	  int [] ar = new int[n];
	  for (int i = 0; i < n; i++) {
	      ar[i] = in.nextInt();
	  }
	  Arrays.sort(ar);
	  boolean ok = true;
	  for ( int i = 1; i < n && ok; i++) {
	     if (ar[i] != ar[i-1]) {
	        System.out.println(ar[i]);
		ok = false;
	     }
	  }
	  if (ok) {
	    System.out.println("NO");
	  }
     }
}
