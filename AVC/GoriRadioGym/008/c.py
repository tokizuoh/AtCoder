A = ['dream', 'dreamer', 'erase', 'eraser']

for i in range(len(A)):
    A[i] = A[i][::-1]

s = input()[::-1]
i = 0
while True:
    f = True
    for a in A:
        if len(a) > len(s) - i:
            continue
        if s[i:i+len(a)] == a:
            i += len(a)
            f = False
            break
    else:
        if i == len(s):
            print('YES')
            exit()
        if f == True:
            print('NO')
            exit()


print('YES')