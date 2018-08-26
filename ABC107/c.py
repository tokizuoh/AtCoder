def main():
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    
    ans = 0
    cost = 0
    b = 0
    f = False
    for i in range(n - k + 1):
        if i == 0:
            for j in range(k):
                if j != 0:
                    cost += A[j] - A[j - 1]
            if A[i] <= 0 <= A[i + k - 1]:
                pass
            else:
                f = True
                b =  min(abs(A[i]), abs(A[k - 1]))
                cost += b
            ans = cost
        else:
            if f == True:
                cost -= b
                f = False
            cost -= A[i] - A[i - 1]
            cost += A[i + k - 1] - A[i + k - 2]
            if A[i] <= 0 <= A[i + k - 1]:
                pass
            else:
                f = True
                b = min(abs(A[i]), abs(A[i + k - 1]))
                cost += b
            print(ans, cost)
            ans= min(ans, cost)
   
    print(ans)

if __name__ == "__main__":
    main()