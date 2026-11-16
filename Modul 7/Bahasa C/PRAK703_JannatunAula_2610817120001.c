#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[200];
    int vowel = 0, consonant = 0;

    printf("Kalimat : ");
    if (fgets(sentence, sizeof sentence, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }
    sentence[strcspn(sentence, "\n")] = '\0';

    int length = strlen(sentence);

    for (int i = 0; i < length; i++) {
        char c = sentence[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vowel++;
        } else if (c >= 'a' && c <= 'z') {
            consonant++; 
        }
    }

    printf("Jumlah Vokal : %d\n", vowel);
    printf("Jumlah Konsonan : %d\n", consonant);

    return 0;
}