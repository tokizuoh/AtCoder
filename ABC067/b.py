n,k=input().split()
print(sum(sorted(list(map(int,input().split())))[:-int(k)-1:-1]))