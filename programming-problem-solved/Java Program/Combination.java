import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()){
			int n = scan.nextInt();
			int m = scan.nextInt();
			
			if(n == 0 && m == 0) {
				break;
			}
			
			int nm = n - m;
							
			BigInteger a = BigInteger.ONE;
			BigInteger b = BigInteger.ONE;
		
			for(int i = n; i > nm; i--){
				a = a.multiply(BigInteger.valueOf(i));
			}		
			for(int j = 1; j <= m; j++) {
				b = b.multiply(BigInteger.valueOf(j));
			}
			System.out.println(n + " things taken "+m+" at a time is "+a.divide(b)+" exactly.");			
		}
	}
}
