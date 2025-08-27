//https://codeforces.com/problemset/problem/134/A
import java.util.Scanner;
import java.util.Vector;

public class Main{
     public static void main(String args[]) {
         Scanner in = new Scanner(System.in);
	 int n = in.nextInt();
	 int [] a = new int[n];
	 int sum = 0;
	 for (int i = 0; i < n; i++) {
	     a[i] = in.nextInt();
	     sum += a[i];
	 }
	 Vector <Integer> A = new Vector <Integer>();
	 for (int i = 0; i < n; i++) {
	     if ((sum - a[i]) % (n - 1) == 0 && (sum - a[i]) / (n - 1) == a[i]) {
	         A.add(i + 1);
	     }
	 }
	 System.out.println(A.size());
	 for (int x : A) {
	    System.out.print(x + " ");
	 }
     }
}
