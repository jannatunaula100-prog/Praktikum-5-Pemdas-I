first = input("Nama Depan : ")
last = input("Nama Belakang : ")
full_name = first + " " + last

letters = 0
for i in range(len(full_name)):
    if full_name[i] != " ":
        letters = letters + 1

print("Nama Lengkap :", full_name)
print("Panjang Nama (tanpa spasi) :", letters)