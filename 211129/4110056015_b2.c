/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,dig,N=1000000007;
	unsigned long long num=0;
	scanf("%d",&dig);
	long long int a[200000];
	
	for(i=0;i<dig;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<(dig);i++){
		for(j=0;j<i;j++){
			num+=((a[i]%N)*(a[j]%N))%N;
			num=num%N;
		}
	}
	printf("%llu",num);
	
}
