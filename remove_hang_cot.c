#include <stdio.h>

void removeRowAndColumn(int matrix[10][10], int *N, int *M) {
    // Loại bỏ hàng đầu tiên
    for (int i = 0; i < *N - 1; i++) {
        for (int j = 0; j < *M; j++) {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    (*N)--;

    // Loại bỏ cột đầu tiên
    for (int i = 0; i < *N; i++) {
        for (int j = 0; j < *M - 1; j++) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }
    (*M)--;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int matrix[10][10];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Xử lý ma trận
        removeRowAndColumn(matrix, &N, &M);

        // In kết quả
        printf("Test %d:\n", t);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
