D=[i for i in range(2,14)]+[1]
a,b=map(int,input().split())
print(['Bob','Alice','Draw'][(D.index(a)>=D.index(b))+(D.index(a)==D.index(b))])