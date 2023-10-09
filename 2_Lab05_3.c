//1173

#include <stdio.h>

int N, m, M, T, R;
int cnt, currentPulse, time;

int main() {
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    currentPulse = m;

    if (currentPulse + T > M) {
        printf("-1\n");
        return 0;
    }

    for (cnt = 0; cnt < N;) {
        time++;

        if (currentPulse + T <= M) {
            currentPulse += T;
            cnt++;
        } else {
            currentPulse -= R;
            if (currentPulse < m) currentPulse = m;
        }
    }

    printf("%d\n", time);

    return 0;
}
