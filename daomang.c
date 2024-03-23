#include <stdio.h>

void daoNguocMang(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main() {
    int n; scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    daoNguocMang(a,n);      
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
