#include <stdio.h>
#include<math.h>

// Hàm kiểm tra một số có phải là số nguyên tố hay không
int isPrime(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i <=sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}
// Hàm kiểm tra một số có phải là số thuận nghịch hay không
int isPalindrome(int n) {
    int reverse = 0, temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (n == reverse);
}
// Hàm liệt kê số nguyên tố và thuận nghịch trong đoạn [a, b]
void list_Prime_Palindrome(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    if (count % 10 != 0) {
        printf("\n");
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--){
        int a, b;
        scanf("%d %d", &a, &b); 
        list_Prime_Palindrome(a, b);
    }
    return 0;
}
