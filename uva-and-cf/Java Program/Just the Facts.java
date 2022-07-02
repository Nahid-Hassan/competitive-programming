import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
		
		while(scan.hasNext()){
			int n = scan.nextInt();
			BigInteger res = BigInteger.ONE;

			for(int i = 2; i <= n; i++){
				res = res.multiply(BigInteger.valueOf(i));
			}		
			String ans = res.toString();
			char ch = ' ';
			for(int i = ans.length() - 1; i >= 0; i--) {
				if(ans.charAt(i) != '0') {
					ch = ans.charAt(i);
					break;	
				}
			}
			System.out.printf("%5d -> %c\n",n,ch);
		}
	}
}
