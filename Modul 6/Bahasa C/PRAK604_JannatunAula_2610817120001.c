#include <stdio.h>
#include <string.h>

int main(void) {
    char code[200];
    char message[200];
    char result[200];
    int asterisk = 0, hashtag = 0;

    if (fgets(code, sizeof code, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }
    if (fgets(message, sizeof message, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }

    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    if (strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int panjang = strlen(code);

    for (int i = 0; i < panjang; i++) {
        if (code[i] == ' ' && message[i] == ' ') {
            result[i] = ' ';       
        } else if (code[i] == message[i]) {
            result[i] = '*';
            asterisk++;
        } else {
            result[i] = '#';
            hashtag++;
        }
    }
    result[panjang] = '\0';

    printf("%s\n", result);
    printf("* = %d\n", asterisk);
    printf("# = %d\n", hashtag);

    if (asterisk >= hashtag) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}