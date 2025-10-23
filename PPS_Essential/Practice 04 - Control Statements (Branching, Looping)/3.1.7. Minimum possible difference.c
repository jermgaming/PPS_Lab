#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int initial_diff = N - M;
    int min_diff;

    if (K >= abs(initial_diff)) {
        min_diff = 0;
    } else {
        if (initial_diff > 0)
            min_diff = initial_diff - K;
        else
            min_diff = initial_diff + K;
    }

    printf("%d\n", (min_diff));
    return 0;
}

