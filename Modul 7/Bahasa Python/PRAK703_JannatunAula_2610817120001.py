sentence = input("Kalimat : ")
vowel = 0
consonant = 0

for i in range(len(sentence)):
    c = sentence[i].lower()

    if c == "a" or c == "i" or c == "u" or c == "e" or c == "o":
        vowel = vowel + 1
    elif c >= "a" and c <= "z":
        consonant = consonant + 1   

print("Jumlah Vokal :", vowel)
print("Jumlah Konsonan :", consonant)