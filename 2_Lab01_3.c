//1157

#include <stdio.h>
#include <ctype.h>

int main() {
    char word[1000001];
    int count[26] = {0};

    scanf("%s", word);

    for (int i = 0; word[i]; i++) {
        word[i] = toupper(word[i]);
    }

    for (int i = 0; word[i]; i++) {
        if (isalpha(word[i])) {
            count[word[i] - 'A']++;
        }
    }

    int max_count = 0;
    char max_char = '?';

    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_char = 'A' + i;
        } else if (count[i] == max_count) {
            max_char = '?'; 
        }
    }

    printf("%c\n", max_char);

    return 0;
}
