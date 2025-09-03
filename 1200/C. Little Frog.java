//https://codeforces.com/problemset/problem/53/C
import java.util.Scanner;

public class Main {
     public static void main(String args[]){
         Scanner in = new Scanner(System.in);
	 int n = in.nextInt();
	 int s = 1 , e = n;
	 while (s <= e) {
	    if (s == e) {
	        System.out.println(s);
	    } else {
	        System.out.print(s + " " + e + " ");
	    }
	    s++;
	    e--;
	 }
	
     } 
}
