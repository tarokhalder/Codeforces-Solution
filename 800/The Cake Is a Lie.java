//https://codeforces.com/problemset/problem/1519/B
import java.util.Scanner;

public class Main{
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
	int tt = in.nextInt();
	while (tt-->0) {
	    int n = in.nextInt();
	    int m = in.nextInt();
	    int k = in.nextInt();
	    int sum = n - 1;
	    for (int i = 1; i < m; i++) {
	        sum += n;
	    }
	    System.out.println((sum == k) ? "YES" : "NO");
	}
    }
}
