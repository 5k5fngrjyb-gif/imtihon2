#include <stdio.h>
#include <string.h>

struct Mahsulot {
    char nomi[50];
    long long narxi;
    int soni;
};

int main() {
    const int N = 5;
    struct Mahsulot m[5];
    char qidiruv[50];
    int i;

    for (i = 0; i < N; i++) {
        scanf("%s %lld %d", m[i].nomi, &m[i].narxi, &m[i].soni);
    }

    scanf("%s", qidiruv);

    int maxIdx = 0;
    for (i = 1; i < N; i++) {
        if (m[i].narxi > m[maxIdx].narxi) {
            maxIdx = i;
        }
    }

    int topilgan = -1;
    for (i = 0; i < N; i++) {
        if (strcmp(m[i].nomi, qidiruv) == 0) {
            topilgan = i;
            break;
        }
    }

    if (topilgan != -1) {
        printf("Mahsulot topildi!\n");
        printf("Nomi: %s\n", m[topilgan].nomi);
        printf("Narxi: %lld\n", m[topilgan].narxi);
        printf("Soni: %d\n", m[topilgan].soni);
    } else {
        printf("Mahsulot topilmadi!\n");
    }
    printf("\n");

    FILE *fout = fopen("mahsulotlar.txt", "w");
    for (i = 0; i < N; i++) {
        fprintf(fout, "%s %lld %d\n", m[i].nomi, m[i].narxi, m[i].soni);
    }
    fprintf(fout, "Eng qimmat mahsulot: %s (%lld)\n", m[maxIdx].nomi, m[maxIdx].narxi);
    fclose(fout);

    printf("Ma'lumotlar mahsulotlar.txt fayliga saqlandi.\n");

    return 0;
}