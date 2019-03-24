s = input()
m = 0
c = 0
for i in range(len(s)):
    if s[i] in ['A', 'C', 'G', 'T']:
        c += 1
        m = max(m, c)
    else:
        m = max(m, c)
        c = 0
print(m)