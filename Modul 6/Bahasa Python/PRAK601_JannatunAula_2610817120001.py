row, column = input().split()
row = int(row)
column = int(column)
data = input().split()
matrix = []
ordinal = 0

for i in range(row):
    row_matrix = []
    for j in range(column):
        row_matrix.append(int(data[ordinal]))
        ordinal += 1
    matrix.append(row_matrix)

for i in range(row):
    for j in range(column):
        print(matrix[i][j], end=" ")
    print()