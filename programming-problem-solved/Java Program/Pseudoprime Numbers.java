import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        BigInteger p,a;
		BigInteger zero = new BigInteger("0");
		while(true) {
			p = scan.nextBigInteger();
			a = scan.nextBigInteger();

			if(zero.equals(p)) {
				if(zero.equals(a)){
					break;				
				}
			}
			else {
				if(!(isPrime(toString()) + a.modPow(p,p) == a)) {
					System.out.println("yes");
				}
				else {
					System.out.println("no");
				}
			}
		}            
	}
	public boolean  isPrime(int x){
    if (x==1) {
        return true;
    } else{
    for(int i=2;i<=Math.sqrt(x);i++){

        if(x%i==0) return false;          
    }
    return  true;
    }
}
}
