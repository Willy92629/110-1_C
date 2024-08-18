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
	int N,primeA,prime;
	int n,i,j,dig=0,d10=1;
	scanf("%d",&N);
	n=N;
	for(i=1;i<=10;i++){
		if(N>0){
			N/=10;
			dig++;
		}else
			{break;}
		}
	for(i=1;i<dig;i++){
		d10*=10;
	}
	
	for(j=1;j<=dig;j++){
		n=(n/d10)+(n%d10)*10;
		for(i=1;i<=n;i++)
		{
			if(n%i==0){
				primeA++;
			}
		}
	}
	if(primeA==2*dig){
		printf("circular prime");
	}else{
		printf("not circular prime");
	}
	return 0;
}
