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
	int n;
	int m;
	int r;
	int c;
	
	scanf("%d %d",&n,&m);
	
	r = (m-2*n)/2 ;
	c = n-r ;
	
	printf("%d\n%d",r,c);
	
	return 0;
}
