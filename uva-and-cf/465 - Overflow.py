def main():
    int_range = 2147483647

    while True:
        try:
            equation = input()
            print(equation)

            a, b, c = equation.split()
            
            if int(a) > int_range:
                print('first number too big')
            if int(c) > int_range:
                print('second number too big')
            if b == '+' and (int(a) + int(c)) > int_range:
                print('result too big')
            if b == '*' and (int(a) * int(c)) > int_range:
                print('result too big')

        except EOFError:
            break


if __name__ == '__main__':
    main()
