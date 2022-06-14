import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger a, b, sum;
        StringBuffer s;

        int tc = scan.nextInt();

        while(tc-->0) {
			s = new StringBuffer(scan.next());
			s = s.reverse();
			a = new BigInteger(s.toString());
			s = new StringBuffer(scan.next());
			s = s.reverse();
			b = new BigInteger(s.toString());

			sum = a.add(b);
			s = new StringBuffer(sum.toString());
			s = s.reverse();
			sum = new BigInteger(s.toString());

			System.out.println(sum);
		}    
	}
}
