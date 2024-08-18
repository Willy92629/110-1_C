/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j;
	unsigned long long int fac=1;
	int k;
	
	scanf("%d",&n);
	
	for(i=0;i<=20;i++){
		fac=1;
		for(j=1;j<=i;j++){
			fac*=j;
		}
		if((fac%n)==0){
		k=i;
		break;
		}
	}
	
	printf("%d",k);
	
	return 0;
}
