import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n;

		while (scan.hasNext()) {
			n = scan.nextInt();

			BigInteger a, b, total,c ;
			a = new BigInteger("1");
			b = new BigInteger("2");
			total = BigInteger.ZERO;
			
			if(n == 0) {
				System.out.println(a);
			} else if (n == 1) {
				System.out.println(b);
			} else {
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

