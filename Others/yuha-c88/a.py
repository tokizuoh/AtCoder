n = int(input())
ans = ''
for i in range(n):
    a, _, c = input().split()
    if a == 'MIDDLE':
        ans += c[len(c)//2]
    elif a == 'END':
        ans += c[-1]
    else:
        ans += c[0]
print(ans)