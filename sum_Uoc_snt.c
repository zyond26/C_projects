#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int sum_UocSo = 0;
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        // Phân tích số thành các thừa số nguyên tố và tính tổng các ước số nguyên tố
        for (int j = 2; j<=sqrt(t); j++) {
            if (t % j == 0) {
                while (t % j == 0) {
                    sum_UocSo += j;
                    t /= j;
                }
            }
        }
    printf("%d\n", sum_UocSo);
    }
    return 0;
}


