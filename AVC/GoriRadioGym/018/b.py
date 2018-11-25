O = input()
E = input()
ans = ''
for i in range(min(len(O), len(E))):
    ans += O[i] + E[i]
ans += [O[-1],'',E[-1]][len(O) <= len(E) and len(O) == len(E)]
print(ans)