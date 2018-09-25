A,B=map(int,input().split())
print(["Impossible","Possible"][A%3==0 or B%3==0 or (A+B)%3==0])