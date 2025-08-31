#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int cards[100][100];
    int scores[100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &cards[i][j]);
        }
        qsort(cards[i], m, sizeof(int), compare);
    }

    for (int j = 0; j < m; j++) {
        int maximum = 0;
        for (int i = 0; i < n; i++) {
            if (cards[i][j] > maximum) {
                maximum = cards[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            if (cards[i][j] == maximum) {
                scores[i]++;
            }
        }
    }

    int max_score = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] == max_score) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
