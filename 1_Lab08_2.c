#10825

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[11];
    int korean;
    int english;
    int math;
} Student;

int compare(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;

    if (studentA->korean != studentB->korean)
        return studentB->korean - studentA->korean;

    if (studentA->english != studentB->english)
        return studentA->english - studentB->english;

    if (studentA->math != studentB->math)
        return studentB->math - studentA->math;

    return strcmp(studentA->name, studentB->name);
}

int main() {
    int N;
    scanf("%d", &N);

    Student *students = (Student *)malloc(N * sizeof(Student));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    qsort(students, N, sizeof(Student), compare);

    for (int i = 0; i < N; i++) {
        printf("%s\n", students[i].name);
    }

    free(students);

    return 0;
}
