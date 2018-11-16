S = input()
a = ''

for s in S:
    if s in ['0', '1']:
        a += s
    else:
        a = a[:-1]
else:
    print(a)