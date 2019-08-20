import sys
import math

def main():
    #sys.stdin = open('in.txt')

    while True:
        try:
            t, a, b = map(int, input().split())
            print('(%d^%d-1)/(%d^%d-1) '%(t,a,t,b), end='')

            if t == 1:
                print("is not an integer with less than 100 digits.")
            elif a == b:
                print(1)
            elif a % b != 0 or a < b:
                print("is not an integer with less than 100 digits.")
            elif (a - b) * math.log10(t) > 99:
                print("is not an integer with less than 100 digits.")
            else:
                res1 = pow(t, a) - 1
                res2 = pow(t, b) - 1

                if res2 == 0:
                    print("is not an integer with less than 100 digits.")
                else:
                    print(res1 // res2)                    
        except EOFError:
            break

if __name__ == '__main__':
    main()
