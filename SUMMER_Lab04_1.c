
//1032
#include <stdio.h>
#include <string.h>

int main() {
    char text[50],search[50];
    int N;
    scanf("%d", &N);
    scanf("%s", &text);
    for (int i = 1; i < N; i++) {
        scanf("%s", &search);
        int j = 0;
        while (text[j])
        {
            if (text[j] != search[j])  text[j] = '?';
            j++;
        }
    }
    printf("%s", text);
    return 0;
}