#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerations(char *key, int length) {
    const char charset[] = "qwertyuiopasdfghjklzxcvbnm1234567890";

    for (int i = 0; i < length; i++) {
        key[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    key[length] = '\0';
}

int main(void) {
    srand((unsigned)time(NULL));

    char ch[13];

    gerations(ch, 12);

    printf("%s\n", ch);

    return 0;
}