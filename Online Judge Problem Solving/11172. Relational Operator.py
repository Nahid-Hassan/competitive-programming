# Author: nahid.cseru@gmail.com
# Github Id: Nahid-Hassan
# Uva 11172: Relational Operator


def Main():
    testCase = int(input())

    for i in range(testCase):
        a, b = map(int, input().split())

        if a > b:
            print('>')
        elif a < b:
            print('<')
        else:
            print('=')


if __name__ == '__main__':
    Main()