#include <stdio.h>

int engKatta(int a[3][3]) {
    int max = a[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", a[i][j]);
            if (j < 2) printf(" ");
        }
        printf("\n");
    }

    printf("\nEng katta element: %d\n", engKatta(a));

    for (int i = 0; i < 3; i++) {
        int s = 0;
        for (int j = 0; j < 3; j++)
            s += a[i][j];
        printf("%d-satr yig'indisi: %d\n", i + 1, s);
    }

    return 0;
}