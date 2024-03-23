#include<stdio.h>

long long sokhgiam(long long a){
	while(a>0){
		if((a%10)>=((a%100)/10)){
			a/=10;
		}else{
			return	0;
		}
	}return	1;
}
int main(){
	int test;
	scanf("%d", &test);
	for(int i=0; i<test; i++){
		long long a;
		scanf("%lld", &a);
		if(sokhgiam(a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return	0;
}