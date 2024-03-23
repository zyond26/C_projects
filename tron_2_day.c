#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh để sắp xếp mảng tăng dần
int compareAscending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Hàm so sánh để sắp xếp mảng giảm dần
int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void mergeArrays(int n, int *arrA, int *arrB) {
    // Sắp xếp mảng A tăng dần
    qsort(arrA, n, sizeof(int), compareAscending);

    // Sắp xếp mảng B giảm dần
    qsort(arrB, n, sizeof(int), compareDescending);

    // Tạo mảng kết quả
    int *result = (int *)malloc(2 * n * sizeof(int));

    // Trộn mảng A và B theo yêu cầu
    for (int i = 0; i < n; i++) {
        result[2 * i] = arrA[i];      // Chẵn: dãy A
        result[2 * i + 1] = arrB[i];  // Lẻ: dãy B
    }

    // In kết quả
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ
    free(result);
}

int main() {
    int t; // Số bộ test
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n; // Số phần tử của mỗi dãy
        scanf("%d", &n);

        int arrA[n], arrB[n];

        // Nhập dãy A
        for (int i = 0; i < n; i++) {
            scanf("%d", &arrA[i]);
        }

        // Nhập dãy B
        for (int i = 0; i < n; i++) {
            scanf("%d", &arrB[i]);
        }

        // Gọi hàm để trộn và in kết quả
        printf("Test %d: \n", test);
        mergeArrays(n, arrA, arrB);
    }

    return 0;
}
