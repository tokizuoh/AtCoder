a,b,c=map(int,input().split())
N=int(input())
print(max(0,N-a),max(0,N*2-b),max(0,N*3-c))