A = list(map(int, input().split()))
A = sorted(A)
if (A[0] == A[1] and A[1] != A[2]) or (A[0] != A[1] and A[1] == A[2]):
    print("Yes")
else:
    print("No")