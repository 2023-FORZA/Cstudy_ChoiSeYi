//4740
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[80];
    char reversed[80];

    while (1) {
        scanf("%[^\n]", sentence);
        getchar();

        if (strcmp(sentence, "***") == 0) {
            break;
        }

        int length = strlen(sentence);

        for (int i = 0; i < length; i++) {
            reversed[i] = sentence[length - i - 1];
        }

        reversed[length] = '\0';

        printf("%s\n", reversed);
    }

    return 0;
}
