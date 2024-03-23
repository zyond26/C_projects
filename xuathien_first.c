#include <stdio.h>

// Hàm tìm phần tử duy nhất trong mảng
int findUniqueElement(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        // Sử dụng phép XOR để loại bỏ các phần tử xuất hiện hai lần
        result ^= arr[i];
    }
    return result;
}
int main() {
    int n;
    scanf("%d", &n);
    // Kiểm tra điều kiện về số lẻ
    if (n % 2 == 0) {
        return 1; 
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int uniqueElement = findUniqueElement(a, n);
    printf("%d", uniqueElement);

    return 0;
}
