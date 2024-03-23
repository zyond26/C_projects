#include <stdio.h>

// Hàm tính giá trị của một phần tử trong tam giác Pascal
int calculate_Pascal(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return calculate_Pascal(n - 1, k - 1) + calculate_Pascal(n - 1, k);
    }
}

// Hàm in tam giác Pascal
void printPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", calculate_Pascal(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        return 1; 
    }
    printPascal(n);

    return 0;
}
