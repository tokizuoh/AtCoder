a, b, c = map(int, input().split())
for i in range(1, 101):
    if (a * i) % b == c:
        print('YES')
        exit()
else:
    print('NO')
    exit()