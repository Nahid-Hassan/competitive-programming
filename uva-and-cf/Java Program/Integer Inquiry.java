import java.math.BigInteger;
import java.util.Scanner;

public class main {
	public static void main(String[] agrs) {
		BigInteger sum = BigInteger.ZERO;

		Scanner s = new Scanner(System.in);

		BigInteger n = s.nextBigInteger();

		while(n.compareTo(BigInteger.ZERO) != 0) {
			sum = sum.add(n);
			n = s.nextBigInteger();
		}
		System.out.println(sum);
	}
}
