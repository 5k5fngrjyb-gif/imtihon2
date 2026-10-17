#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%100s", s);

    printf("Uzunligi: %d\n", (int)strlen(s));
}