input()
print(sum([bin(i)[::-1].index("1")for i in map(int,input().split())]))