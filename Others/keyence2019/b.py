S = input()
for i in range(7):
    if S[:i] + S[-7+i:] == 'keyence':
        print('YES')
        exit()
print('NO')