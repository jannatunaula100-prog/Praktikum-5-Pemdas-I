n = int(input())
data = input().split()

zetsu = []
for i in range(n):
    zetsu.append(int(data[i]))

for i in range(n):
    zetsu[i] = zetsu[i] * (i + 1)

for i in range(n):
    print(zetsu[i], end="")
    if i < n - 1:
        print(" ", end="")
print()