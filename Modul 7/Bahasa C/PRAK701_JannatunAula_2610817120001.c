#include <stdio.h>
#include <string.h>

int main(void) {
    char first[50];
    char last[50];
    char full_name[101];
    int letters = 0;

    printf("Nama Depan : ");
    if (fgets(first, sizeof first, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }
    first[strcspn(first, "\n")] = '\0';

    printf("Nama Belakang : ");
    if (fgets(last, sizeof last, stdin) == NULL) {
        printf("Gagal membaca input.\n");
        return 1;
    }
    last[strcspn(last, "\n")] = '\0';

    strcpy(full_name, first);
    strcat(full_name, " ");
    strcat(full_name, last);

    for (int i = 0; i < strlen(full_name); i++) {
        if (full_name[i] != ' ') {
            letters++;
        }
    }

    printf("Nama Lengkap : %s\n", full_name);
    printf("Panjang Nama (tanpa spasi) : %d\n", letters);

    return 0;
}