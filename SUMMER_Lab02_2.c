//1925

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) {
        return -1;
    } else if (num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

void distance(int xy1[], int xy2[], int xy3[], int dis[]) {
    dis[0] = (xy1[0] - xy2[0]) * (xy1[0] - xy2[0]) + (xy1[1] - xy2[1]) * (xy1[1] - xy2[1]);
    dis[1] = (xy1[0] - xy3[0]) * (xy1[0] - xy3[0]) + (xy1[1] - xy3[1]) * (xy1[1] - xy3[1]);
    dis[2] = (xy3[0] - xy2[0]) * (xy3[0] - xy2[0]) + (xy3[1] - xy2[1]) * (xy3[1] - xy2[1]);
}

int main(void) {
    int xy1[2], xy2[2], xy3[2], dis[3];
    scanf("%d %d %d %d %d %d", &xy1[0], &xy1[1], &xy2[0], &xy2[1], &xy3[0], &xy3[1]);

    distance(xy1, xy2, xy3, dis);

    if ((xy1[1] - xy2[1]) * (xy1[0] - xy3[0]) == (xy1[1] - xy3[1]) * (xy1[0] - xy2[0])) {
        printf("X");
    } 
    else {
        qsort(dis, sizeof(dis) / sizeof(int), sizeof(int), compare);

        if (dis[0] == dis[1] && dis[0] == dis[2]) {
            printf("JungTriangle");
        } else if (dis[0] == dis[1] && dis[0] != dis[2] || dis[0] == dis[2] && dis[0] != dis[1] || dis[1] == dis[2] && dis[0] != dis[1]) {
            if (dis[0] + dis[1] == dis[2]) {
                printf("Jikkak2Triangle");
            } else if (dis[0] + dis[1] > dis[2]) {
                printf("Yeahkak2Triangle");
            } else {
                printf("Dunkak2Triangle");
            }
        } else {
            if (dis[0] + dis[1] == dis[2]) {
                printf("JikkakTriangle");
            } else if (dis[0] + dis[1] > dis[2]) {
                printf("YeahkakTriangle");
            } else {
                printf("DunkakTriangle");
            }
        }
    }

    return 0;
}
