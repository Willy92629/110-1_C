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
	int i,seed,res,j;
	scanf("%d %d",&i,&seed);
	srand(seed);
	
	for(j=1;j<=i;j++){
		res=(rand()%100)+1;
	}
	
	printf("%d",res);
	return (0);
}
