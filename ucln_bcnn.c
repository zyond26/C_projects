#include <stdio.h>

long findGCD(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long findLCM(long a, long b) {
    long gcd = findGCD(a, b);
    long lcm = (a * b) / gcd;
    return lcm;
}

long main() {
        long a,b;
        scanf("%ld %ld",&a,&b);
        long gcd = findGCD(a,b);
        printf("%ld\n",gcd);
        long lcm = findLCM(a,b);
        printf("%ld", lcm);

    return 0;
}