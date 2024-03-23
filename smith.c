#include<stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int isSmith(int n) {
    int originalSum = sumOfDigits(n);
    int factorSum = 0;
//tính tổng các chữ số của thừa số nguyên tố
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && isPrime(i)) {
            factorSum += sumOfDigits(i);
            n /= i;
        }
    }
    return originalSum == factorSum;
}
int main() {
    long long n;
    scanf("%lld", &n);
    if (isSmith(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
