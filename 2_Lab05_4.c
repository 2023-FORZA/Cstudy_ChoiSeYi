//1297

#include <stdio.h>

int main() {
    int D, H, W;
    scanf("%d %d %d", &D, &H, &W);

    double ratio = sqrt(H * H + W * W);
    int real_height = (int)(D * H / ratio);
    int real_width = (int)(D * W / ratio);

    printf("%d %d\n", real_height, real_width);
    return 0;
}
