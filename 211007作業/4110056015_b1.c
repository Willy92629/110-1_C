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
	int S ;
	int a ;
	int b ;
	int c ;
	
	scanf("%d",&S);
	c = S%10;
	b = ((S-c)/10)%10 ;
	a = S/100;
	printf("%d\n%d\n%d",c,b,a);
	
}
