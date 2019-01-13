a = [False for i in range(4)]
N = map(int, input().split())
for n in N:
    if n == 1:
        a[0] = True
    elif n == 9:
        a[1] = True
    elif n == 7:
        a[2] = True
    elif n == 4:
        a[3] = True

for i in range(4):
    if a[i] == False:
        print('NO')
        exit()
print('YES')
exit()