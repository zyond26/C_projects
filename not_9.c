#include <stdio.h>

int include_9(int n){
    while(n>0){
        if(n%10==9){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int so_thuan_nghich(int n){
    int or_nums = n;
    int reserved_nums = 0;
    while(n!=0){
        reserved_nums =reserved_nums * 10 + n%10 ;
        n /= 10;
    }
    return or_nums == reserved_nums;
}

int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    for(int i=2; i<num; i++){
        if(so_thuan_nghich(i) && include_9(i)){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("%d", count);
    return 0;
}
