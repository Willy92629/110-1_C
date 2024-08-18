/*
系級：資工系 1年級 
學號：4110056015 
姓名：許家紳 
聯絡電子郵件：willyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Candy ;
	int bag ;
	int leave ;
	
	printf("糖果總量：");
	scanf("%d",&Candy);
	bag = Candy/100;
	leave = Candy-100*bag ;
	
	
	printf("%d %d",bag,leave);
	
	return 0 ;
}
