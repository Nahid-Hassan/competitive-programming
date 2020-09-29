import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
			
			int tc;
			tc = scan.nextInt();				
			int n, a, count;				
			BigInteger c, total, d;
			total= BigInteger.ZERO;	
	
			while(tc-- > 0) {
				c = scan.nextBigInteger();
				n = scan.nextInt();
				count = 0;					

				for(int i = 1; i <= n; i++) {
					a = scan.nextInt();
					d = c.mod(BigInteger.valueOf(a)); 
					if(d.equals(total)) {
						count++;
					}
				}
				if(count == n) {
					System.out.println(c+" - Wonderful.");
				}
				else {
					System.out.println(c+" - Simple.");
				}
			}
	}
}
