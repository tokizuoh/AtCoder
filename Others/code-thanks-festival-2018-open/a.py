t,a,b,c,d=map(int,input().split())
if t >= a + c:
    print(b + d)
else:
    if c <= t:
        print(d)
    elif a <= t:
        print(b)
    else:
        print(0)