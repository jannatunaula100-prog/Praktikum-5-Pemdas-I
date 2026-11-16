code = input()
message = input()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    asterisk = 0
    hashtag = 0

    for i in range(len(code)):
        if code[i] == " " and message[i] == " ":
            result = result + " "     
        elif code[i] == message[i]:
            result = result + "*"
            asterisk = asterisk + 1
        else:
            result = result + "#"
            hashtag = hashtag + 1

    print(result)
    print("* =", asterisk)
    print("# =", hashtag)

    if asterisk >= hashtag:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")