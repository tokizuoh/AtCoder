A=[31,29,31,30,31,30,31,31,30,31,30,31]
a,b=map(int,input().split())
c,d=map(int,input().split())
print([d-b,A[a-1]-b+sum(A[a:c-1])+d][a!=c])