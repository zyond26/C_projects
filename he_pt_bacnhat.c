#include <stdio.h>
#include<math.h>

int main() {
    float a, b, c, d, X, Y, M, N;
    printf("Nhap a,b,M: ");
    scanf("%f%f%f", &a,&b,&M);
    printf("nhap c,d,N: ");
    scanf("%f%f%f",&c,&d,&N);

    float det =(a * d) - (b * c);
    if (det != 0) {
        X = abs((M*d -N*b) / det);
        Y = abs((a*N-c*M) / det);
        printf("X = %.2f\n", X);
        printf("Y = %.2f\n", Y);
    } else {
        printf("INVALID.\n");
    }
    return 0;
}