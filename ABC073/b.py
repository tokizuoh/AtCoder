C=[list(map(int,input().split())) for _ in range(int(input()))]
print(sum([c[1]-c[0]+1 for c in C]))