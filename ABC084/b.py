a,b=map(int,input().split())
s=input().split("-")
print(["No","Yes"][len(s[0])==a and len(s[1])==b])