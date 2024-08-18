#include<stdio.h>
#define LIMIT 1000000000000000000LL

int main(void){
	int n, i;
	long long prod = 1, num;
	
	scanf("%d", &n);
	
	for(i = 0;i<n;i++){
		scanf("%lld", &num);
		
		if(num == 0){
			prod = 0;
			break;
		}
		
		if(prod > 0){
			if(prod > LIMIT / num){
				prod = -1;	
			}
			else{
				prod *= num;
			} 
		}
	}
	
	printf("%lld", prod);
	
	return 0;
}
