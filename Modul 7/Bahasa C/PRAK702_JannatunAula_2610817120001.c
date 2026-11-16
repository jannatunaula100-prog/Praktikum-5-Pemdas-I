#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];
    char small[100];
    int palindrom = 1;

    if (fgets(word, sizeof word, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }
    word[strcspn(word, "\n")] = '\0';

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            small[i] = word[i] + 32;
        } else {
            small[i] = word[i];
        }
    }
    small[length] = '\0';

    for (int i = 0; i < length / 2; i++) {
        if (small[i] != small[length - 1 - i]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom == 1) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}