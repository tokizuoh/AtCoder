N,M=map(int,input().split())
print(sum([(i+1)**2 for i in range(N)])%M)