#include <stdio.h>
int factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac = fac * i;
    }
    return fac;
}
 int main(){
    int n;scanf("%d",&n);
    int t = factorial(n);
    printf("%d",t);
    return 0;
 }
