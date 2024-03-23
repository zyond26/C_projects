#include <stdio.h>
#include <string.h>
int so_thuan_nghich(int n) {
    int originalNumber = n;
    int reservedNumber = 0;
    while (n != 0) {
        int digit = n % 10;
        reservedNumber = reservedNumber * 10 + digit;
        n /= 10;
    }
    return originalNumber == reservedNumber;
}
int checksum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (sum % 10 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int so_8(char number[]) {
    int length = strlen(number);
    if (number[0] != '8' || number[length - 1] != '8') {
        return 0;
    }
    return 1;
}
int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        char number[501];
        scanf("%s", number);
        int n;
        if (so_8(number) && checksum(n) && so_thuan_nghich(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
