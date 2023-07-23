#3062

#include <stdio.h>
#include <stdlib.h>

int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main(void) {
    int n, i, num_length;
    scanf("%d", &n);
    int *num = malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        int num_rev = reverse(num[i]);
        int num_sum = num[i] + num_rev;
        int num_sum_reversed = reverse(num_sum);

        if (num_sum == num_sum_reversed) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    free(num);
    return 0;
}
