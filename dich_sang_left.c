#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int s[n];
	for(int i=0; i<n; i++){
		scanf("%d", &s[i]);
	}
	int k;
	scanf("%d", &k);
	int c = k % n;
	for(int i=0; i < n; i++){
		printf("%d ", s[(i+c)%n]);
	}
	return 0;
}