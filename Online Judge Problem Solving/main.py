import sys
import math

def main():
    #sys.stdin = open('in.txt')

    testCase = int(input())

    for i in range(testCase):
        input()
        num1 = ''
        num2 = ''

        if i > 0:
            print()

        item = int(input())

        for j in range(item):
            a, b = map(str, input().split())
            num1 += a
            num2 += b

        print(int(num1) + int(num2))


if __name__ == '__main__':
    main()