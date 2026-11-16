n1, n2 = input().split()
n1 = int(n1)
n2 = int(n2)

if n1 != n2:
    print("Jumlah tidak sama")
else:
    row1 = input().split()
    row2 = input().split()

    for i in range(n1):
        result = int(row1[i]) * int(row2[i])
        print(result, end="")
        if i < n1 - 1:
            print(" ", end="")
    print()