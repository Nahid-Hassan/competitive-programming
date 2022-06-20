pos = -1

def linear_search(arr: [list], n: int, target: int) ->int:
    global pos

    for i in range(n):
        if (target == arr[i]):
            pos = i
            break
    return pos


def main():
    arr = [56,89,12,0,123,-129,23,324,76,34]
    n = len(arr)
    target = 23

    print("Found at index: {}.".format(pos)) if linear_search(arr, n, target) else print("not found.\n")

if __name__ == "__main__":
    main()