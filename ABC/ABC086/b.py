a=int("".join(list(input().split())))
print(["No","Yes"][int(a**(1/2))**2==a])