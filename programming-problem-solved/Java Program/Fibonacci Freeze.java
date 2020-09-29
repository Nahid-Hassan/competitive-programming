import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		int n;

		while(scan.hasNext()) {
			n = scan.nextInt();
			int p = n;
			if(n==1) {
				System.out.println("The Fibonacci number for "+p+" is "+1);
			} 		
			else if(n==2) {
				System.out.println("The Fibonacci number for "+p+" is "+1);
			}
			else {
				BigInteger a, b, total;
				a = new BigInteger("1");
				b = new BigInteger("1");
				total= BigInteger.ZERO;			
	        
				while(n-->2) {
					total = a.add(b);
					a = b;
					b = total;
				}
				System.out.println("The Fibonacci number for "+p+" is "+total);
			}			
    	}
	}
}
