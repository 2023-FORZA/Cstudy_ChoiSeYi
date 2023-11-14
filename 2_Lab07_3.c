//9226

#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20];
    int i, j;
    char temp;

    while (1) {
        scanf("%s", word);

        if (strcmp(word, "#") == 0) {
            break;
        }

        int length = strlen(word);

        for (i = 0; i <= length; i++) {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u'||i==length) {
                printf("%say\n", word);
                break;
            } else {
                temp = word[0];
                for (j = 1; j < length; j++) {
                    word[j - 1] = word[j];
                }
                word[length - 1] = temp;
            }
        }
    }
    return 0;
}
