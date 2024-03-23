#include <stdio.h>

// Hàm kiểm tra số ưu thế lẻ
int laSoUuTheLe(long long n) {
    if (n % 2 == 0) {
        return 0; // Không phải số lẻ
    }
    int count_odd = 0;
    int count_even = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
        n /= 10;
    }

    return count_odd > count_even;
}

int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (laSoUuTheLe(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
