#include <stdio.h>

int main() {
    int T;
   // scanf("%d", &T);

  //  for (int t = 0; t < T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        // Khai báo và nhập ma trận
        int matrix[10][10];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // In ma trận chuyển vị
       // printf("%d:\n", t + 1);
        for (int j = 0; j < M; j++) {
            for (int i = 0; i < N; i++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    

    return 0;
}
