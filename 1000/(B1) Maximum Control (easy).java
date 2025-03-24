import java.util.Scanner;

public class Main{
    public static void main(String args[]) {
        int [] ans = new int[1001];
	for (int i = 0; i < 1001; i++) {
	    ans[i] = 0;
	}
	Scanner input = new Scanner(System.in);
	int N = input.nextInt();
	N -= 1;
	while (N-- > 0) {
	    int x , y;
	    x = input.nextInt();
	    y = input.nextInt();
	    ans[x] += 1;
	    ans[y] += 1;
	}
	int cnt = 0;
	for (int i = 0; i < 1001; i++) {
	    if(ans[i] == 1) {
	        cnt += 1;
	    }
	}
	System.out.println(cnt);
    }
}
