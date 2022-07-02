import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		int n;

		while(scan.hasNext()) {
			n = scan.nextInt();
			int p = n;
			if(n==0) break;
			else if(n==1) {
				System.out.println(1);
			} 		
			else if(n==2) {
				System.out.println(1);
			}
			else if(n==3) {
				System.out.println(2);
			}
			else {
				BigInteger a, b, c, total;
				a = new BigInteger("n");
				b = new BigInteger("n-1");
				c = new BigInteger("n-2);
								
				total= BigInteger.ZERO;			
	        
				while(n-->1) {
					total = a.add(b);
					a = b;
					b = total;
				}
				System.out.println(total);
			}			
    	}
	}
}
