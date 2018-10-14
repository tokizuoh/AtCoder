N = int(input())

# R = [T, A]
if len(bin(N)) % 2:
    D = [1, 0]
else:
    D = [0, 1]

now = 1
cnt = 0
while now <= N:
    now = now * 2 + D[cnt]
    cnt ^= 1

print(["Takahashi", "Aoki"][cnt])