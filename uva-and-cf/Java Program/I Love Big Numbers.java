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
			
			int answer = 0;

			for(int i = 0; i < ans.length(); i++) {
				answer = answer + (ans.charAt(i) - '0');
			}
			System.out.println(answer);			
		}
	}
}
