#include <stdio.h>

char* is_special_even_number(long long n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            return "NO";
        }
        n /= 10;
    }
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t); 
    for (int i = 0; i < t; ++i) {
        long long n;
        scanf("%lld", &n); 

        printf("%s\n", is_special_even_number(n));
    }

    return 0;
}
