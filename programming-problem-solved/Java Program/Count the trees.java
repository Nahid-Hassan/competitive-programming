import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()){
			int n = scan.nextInt();
			
			if(n == 0) {
				break;
			}				
			BigInteger a = BigInteger.ONE;
			BigInteger b = BigInteger.ONE;
			BigInteger f = BigInteger.ONE;			
			BigInteger c = BigInteger.ONE;			

			for(int i = 1; i <= 2*n; i++){
				a = a.multiply(BigInteger.valueOf(i));
				if(i <= n) {
					b = b.multiply(BigInteger.valueOf(i));
				}
				if(i <= n + 1) {
					c = c.multiply(BigInteger.valueOf(i));
				}
			}	
			for(int j = 1; j <= n; j++) {
				f = f.multiply(BigInteger.valueOf(j));
			}
			BigInteger catalanN = a.divide(b.multiply(c));
			System.out.println(f.multiply(catalanN));
					
		}
	}
}
