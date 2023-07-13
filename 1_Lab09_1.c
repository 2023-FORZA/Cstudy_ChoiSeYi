#8958

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateScore(char* input) {
    int score = 0;
    int combo = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'O') {
            combo++;
            score += combo;
        } else {
            combo = 0;
        }
    }

    return score;
}

int main() {
    int testCaseCount;
    scanf("%d", &testCaseCount);

    char** testCases = (char**)malloc(sizeof(char*) * testCaseCount);

    for (int i = 0; i < testCaseCount; i++) {
        testCases[i] = (char*)malloc(sizeof(char) * 81);
        scanf("%s", testCases[i]);
    }

    for (int i = 0; i < testCaseCount; i++) {
        int score = calculateScore(testCases[i]);
        printf("%d\n", score);
    }

    for (int i = 0; i < testCaseCount; i++) {
        free(testCases[i]);
    }
    free(testCases);

    return 0;
}