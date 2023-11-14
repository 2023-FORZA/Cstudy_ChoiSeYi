//7770

#include <stdio.h>
 
int main(void) {
    int n;
    scanf("%d",&n);
 
    int h = 0;
    int block = 0;
 
    while (block <= n) {
        block += 2 * h * h + 2 * h + 1;
        h++;
    }
    printf("%d\n",h - 1);
 
    return 0;
}