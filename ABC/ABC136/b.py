n = input()
if(len(n) == 1):
    print(n)
    exit()
ans = 0
if len(n) % 2:
    ans += int(n) - 10 ** (len(n) - 1) + 1
    print(str(int('90' * ((len(n) - 3) // 2) + '9') + ans))

else:
    print(str(int('90' * ((len(n) - 2) // 2) + '9')))