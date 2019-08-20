# Author: nahid.cseru@gmail.com
# Github Id: Nahid-Hassan
# Uva 11727: Cost Cutting


def Main():
    testCase = int(input())

    for i in range(testCase):
        lst = list(map(int, input().split()))
        lst.sort()

        print("Case {}:".format(i + 1), lst[1])


if __name__ == '__main__':
    Main()
# Author: nahid.cseru@gmail.com
# Github Id: Nahid-Hassan
