//https://codeforces.com/problemset/problem/413/A
import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
	int n = in.nextInt();
	int m = in.nextInt();
	int min = in.nextInt();
	int max = in.nextInt();
        int [] a = new int[m];
	for (int i = 0; i < m; i++) {
	    a[i] = in.nextInt();
	}
	Arrays.sort(a);
	int cnt = 0;
	if (min != a[0]) {
	    cnt += 1;
	}
	if (max != a[m - 1]) {
	    cnt += 1;
	}
	if (min > a[0] || a[m - 1] > max || cnt > n - m) {
	   System.out.println("Incorrect");
	} else {
	   System.out.println("Correct");
	}
    }
}
