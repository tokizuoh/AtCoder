s = input()
t = input()

ls = len(s)
lt = len(t)
Ans = []
for i in range(ls - lt + 1):
    ss = s[i:i+lt]
    lss = len(ss)
    cnt = 0
    for j in range(lss):
        if s[i + j] == '?' or t[j] == ss[j]:
            cnt += 1
        else:
            break
    else:
        if cnt == lss:
            ans = ''
            for j in range(i):
                if s[j] == '?':
                    ans += 'a'
                else:
                    ans += s[j]
            ans += t
            for j in range(i + lt, ls):
                if s[j] == '?':
                   ans += 'a'
                else:
                    ans += s[j]
            else:
                Ans.append(ans)
if len(Ans) == 0:
    print('UNRESTORABLE')
else:
    print(sorted(Ans)[0])