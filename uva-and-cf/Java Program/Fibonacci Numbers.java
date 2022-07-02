import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		int n;

		while(scan.hasNext()) {
			n = scan.nextInt();
			
			BigInteger a, b, total;
			a = new BigInteger("1");
			b = new BigInteger("1");
			total= BigInteger.ZERO;			
					        
			while(n >= 3) {
				total = a.add(b);
				a = b;
				b = total;
				n--;
			}
			System.out.println(total);
    	}
	}
}
