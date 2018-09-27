L=list(map(int,input().split()))
A=sorted(L[:3])
B=sorted(L[3:])
print(sum([abs(A[i] - B[i]) for i in range(3)]))