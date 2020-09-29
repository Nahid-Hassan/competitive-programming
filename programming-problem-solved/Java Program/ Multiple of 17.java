import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		BigInteger zero = new BigInteger("0");		
		BigInteger m = new BigInteger("17");
	
		while(true) {
			BigInteger a = scan.nextBigInteger();
			
			if(zero.equals(a)) {
				break;
			}
			else if(a.mod(m).equals(BigInteger.ZERO)) {
				System.out.println("1");		
			}
			else {
				System.out.println("0");
			}
		}
    }
	
}
