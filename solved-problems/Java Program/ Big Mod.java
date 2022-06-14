import java.math.BigInteger;
import java.util.Scanner;
 
class Main {
    public static void main(String args[]) {
        BigInteger B, P, M;
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext()) {
            B = scan.nextBigInteger();
            P = scan.nextBigInteger();
            M = scan.nextBigInteger();
 
            System.out.println(B.modPow(P, M).toString());
        }
    }
}
/*public BigInteger modPow(BigInteger exponent, BigInteger m)*/
