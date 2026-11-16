n = int(input())

input ()
A = []
for i in range(n):
    row = input().split()
    for j in range(n):
        row[j] = int(row[j])
    A.append(row)

input ()
B = []
for i in range(n):
    row = input().split()
    for j in range(n):
        row[j] = int(row[j])
    B.append(row)

C = []
for i in range(n):
    row_result = []
    for j in range(n):
        sum = 0
        for k in range(n):
            sum += A[i][k] * B[k][j]
        row_result.append(sum)
    C.append(row_result)

print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(C[i][j], end="")
        if j < n - 1:
            print(" ", end="")
    print()