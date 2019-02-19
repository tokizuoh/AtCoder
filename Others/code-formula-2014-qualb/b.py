n = input()
odd = sum([int(n[i]) for i in range(len(n) - 1, -1, -2)])
even = sum([int(n[i]) for i in range(len(n) -2, -1, -2)])
print(even, odd)