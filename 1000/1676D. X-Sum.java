import java.util.Scanner;

public class Main{
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
	int tt = input.nextInt();
	while(tt-- > 0) {
	    int n = input.nextInt();
	    int m = input.nextInt();
	    long [][]a = new long[n][m];
	    for(int i = 0; i < n; i++) {
	      for(int j = 0; j < m; j++) {
	          a[i][j] = input.nextLong();
	      }
	    }
	    long ans = -1L;
	    for(int i = 0; i < n; i++) {
	       for(int j = 0; j < m; j++) {
	           long sum = a[i][j];
		   int s = 1;
		   for(int k = i + 1; k < n; k++) {
		     if(j + s < m) {
		        sum += a[k][j+s];
		     }
		     if(j - s >= 0) {
		        sum += a[k][j-s];
		     }
		     s += 1;
		   }
		    s = 1;
		    for(int k = i - 1; k >= 0; k--) {
		     if(j + s < m) {
		        sum += a[k][j+s];
		     }
		     if(j - s >= 0) {
		        sum += a[k][j-s];
		     }
		     s += 1;
		   }
		   ans = Math.max(sum , ans);

	       }
	    }
	    System.out.println(ans);
	}
    }
}
