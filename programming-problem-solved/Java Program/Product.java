import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

		while(scan.hasNext()) {
    		BigInteger a = scan.nextBigInteger();
		BigInteger b = scan.nextBigInteger(); 	
    	    	System.out.println(a.multiply(b));
        }            
    }
	
}
