#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 500

// Hàm cộng hai số nguyên dương
char* addLargeIntegers(char num1[], char num2[], char result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int resultLen = (len1 > len2) ? len1 : len2;
    resultLen++;

    result[resultLen] = '\0';

    int carry = 0;

    for (int i = 0; i < resultLen; i++) {
        int digit1 = (i < len1) ? (num1[len1 - 1 - i] - '0') : 0;
        int digit2 = (i < len2) ? (num2[len2 - 1 - i] - '0') : 0;

        int sum = digit1 + digit2 + carry;

        result[resultLen - 1 - i] = (sum % 10) + '0';

        carry = sum / 10;
    }

    if (carry) {
        result[0] = carry + '0';
        return result;
    } else {
        return result + 1;
    }
}

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int t = 0; t < testCases; t++) {
        char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1];
        scanf("%s", num1);
        scanf("%s", num2);

        char result[MAX_DIGITS + 2]; // +2 để có chỗ cho số nhớ nếu cần
        char* sum = addLargeIntegers(num1, num2, result);

        printf("%s\n", sum);
    }

    return 0;
}
