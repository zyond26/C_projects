#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    // Tìm số lần xuất hiện của từng phần tử
    for (int i = 0; i < n; i++) {
        int dem = 0;
        // Kiểm tra số lần xuất hiện của s[i]
        for (int j = 0; j < n; j++) {
            if (s[i] == s[j]) {
                dem++;
            }
        }
        // In ra kết quả nếu chưa in trước đó
        int daIn = 0;
        for (int k = 0; k < i; k++) {
            if (s[k] == s[i]) {
                daIn = 1;
                break;
            }
        }
        if (!daIn) {
            printf("%d %d\n", s[i], dem);
        }
    }
    return 0;
}
