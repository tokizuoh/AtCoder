h, n = map(int, input().split())
A = list(map(int, input().split()))
if sum(A) >= h:
    print('Yes')
else:
    print('No')