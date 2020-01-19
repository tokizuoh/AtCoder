a, b = map(int, input().split())
c = str(a) * b
d = str(b) * a
print(sorted([c, d])[0])