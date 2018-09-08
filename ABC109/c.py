def gcd(a, b):
    if a < b:
        a, b = b, a
    if b == 0:
        return a
    c = a % b
    return gcd(b, c)


def main():
    N, x = map(int, input().split())
    A = list(map(int, input().split()))
    A.append(x)

    A = sorted(A)

    if N == 1:
        print(A[1] - A[0])
        exit()

    g = 1
    g = gcd(A[1] - A[0], A[2] - A[1])
    for i in range(1, len(A)):
        g = gcd(g, A[i] - A[i - 1])
            
    print(g)


if __name__ == "__main__":
    main()
