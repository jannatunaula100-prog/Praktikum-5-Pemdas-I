word = input()
small = word.lower()

backward = small[::-1]

if small == backward:
    print("Kata '" + word + "' adalah palindrom")
else:
    print("Kata '" + word + "' bukan palindrom")