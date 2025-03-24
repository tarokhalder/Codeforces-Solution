import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
	int tt = in.nextInt();
	while (tt-->0) {
	   int k = in.nextInt();
	   int n = in.nextInt();
	   long [] a = new long[n];
	   for (int i = 0; i < n; i++) {
	      a[i] = in.nextLong();
	   }
	   Arrays.sort(a);
	   long ans = 0;
	   long mouse = 0;
	   for (int i = n - 1; i >= 0; i--) {
	       if (a[i] > mouse) {
	          ans += 1;
	       }
	       mouse += (k - a[i]);
	   }
           System.out.println(ans);
	}
    }
}
