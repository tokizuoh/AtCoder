s = input()
ans = 0
for i in range(2 ** (len(s) - 1)):
    tmp = ''
    for j in range(len(s)):
        tmp += s[j]
        if i >> j & 1 == 1:
            tmp += '+'
    else:
        ans += eval(tmp)
else:
    print(ans)