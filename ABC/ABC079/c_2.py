A, B, C, D = input()

op = ['+', '-']

for i in op:
    for j in op:
        for k in op:
            f = A + i + B + j + C + k + D
            if eval(f) == 7:
                print(f + '=7')
                exit()