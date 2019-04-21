n=int(input())
S=input()
k=int(input())
c=S[k-1]
ans=''
for i in range(n):
    ans+=[S[i],'*'][S[i]!=c]
print(ans)