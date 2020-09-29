import java.math.BigInteger;
import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		while (true) {
			int n = scan.nextInt();
			if (n == 0) break;

			BigInteger a = new BigInteger(scan.next(), n); 
			BigInteger b = new BigInteger(scan.next(), n);
		
			System.out.println((a.mod(b)).toString(n)); 
		} 
	} 
}
