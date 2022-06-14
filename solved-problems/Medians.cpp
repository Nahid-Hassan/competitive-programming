#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#define nl "\n"

using namespace std;

int main() {
    double a, b, c;

    while(cin>>a>>b>>c) {
        a = abs(a);
        b = abs(b);
        c = abs(c);

        double area;
        double  s = (a + b + c) / 2.0;
        double answer = s * (s - a) * (s - b) * (s - c);

        if(answer <= 0) {
            area = -1;
            printf("%.3lf\n",area);
        } else {
            printf("%.3lf\n",sqrt(answer) * (4.0 / 3));
        }
    }


    return 0;
}

/*
This is a very easy problem. All you need to know is the correct formula, that's it.
You may check out this. There is a trick.
Output of your program must be satisfy for all the inputs,
including the Negative inputs. Examples: For the Medians (2, 3, 4)
the area of the triangle is 3.873, this is also the output for the
Medians (-2,-3,-4).That means, negative values must be considered here.


Don't see the UVA-toolkit outputs.
Outputs of this problem in UVA-toolkit is wrong. (Correction from SEC(Swordfish))

###################
import java.util.Scanner;
import java.util.StringTokenizer;

public class UVA_10347 {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in);
		while(sc.hasNextLine())
		{
			String line =sc.nextLine();
			if(line == null || line.isEmpty())
			{
				break;
			}
			StringTokenizer st =new StringTokenizer(line);
			double m1= Double.parseDouble(st.nextToken());
			double m2 =Double.parseDouble(st.nextToken());
			double m3 = Double.parseDouble(st.nextToken());
			double sm =(m1+m2+m3)/2.0;
			double a_sq = sm*(sm-m1)*(sm-m2)*(sm-m3);
			if(a_sq<=0)
			{
				double f =-1.0;
				System.out.printf("%.3f\n",f);
			}
			else
			{
				double s =Math.sqrt(a_sq)*(4/3.0);
				System.out.printf("%.3f\n",s);
			}
		}
	}

}
*/
