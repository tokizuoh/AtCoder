x=int(input())
if x % 11 == 0:
    print(x // 11 * 2)
else:
    if x % 11 > 6:
        print(x // 11 * 2 + 2)
    else:
        print(x // 11 * 2 + 1)