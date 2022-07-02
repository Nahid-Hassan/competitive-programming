import sys
from decimal import Decimal, getcontext


def load_number():
    num_str = ''
    while num_str == '\n' or num_str == '':
        num_str = sys.stdin.readline()

    return int(num_str.rstrip())


def main():
    testCase = load_number()

    for i in range(testCase):
        a = load_number()
        
        print(int(Decimal(a).sqrt()))

        if i + 1 < testCase:
            print()

if __name__ == '__main__':
    # getcontext().prec = 2000
    main()

