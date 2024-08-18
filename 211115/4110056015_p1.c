/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int reve(int);

int main()
{
	int n,res;
	scanf("%d",&n);
	reve(n);	
}

int reve(int n)
{
	int m,z=0;
	while(n>0){
		m=n%10;
		if(z==0&&m==0){
		}else{
			printf("%d",m);
			z=1;
		}
		n/=10;
	}
}
