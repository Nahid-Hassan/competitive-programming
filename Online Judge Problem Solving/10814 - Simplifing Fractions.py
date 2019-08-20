import sys
from fractions import Fraction


def main():
    #sys.stdin = open('in.txt')
    testCase = int(input())

    for i in range(testCase):
        a, b, c = map(str, input().split())
        output = str(Fraction(int(a), int(c)))

        if '/' in output:
            a, b = output.split('/')
            print(a,'/',b)
        else:
            print(output, '/ 1')


if __name__ == '__main__':
    main()
    
"""
    For actual solution for this problem:
    https://en.wikipedia.org/wiki/Binary_GCD_algorithm
"""
