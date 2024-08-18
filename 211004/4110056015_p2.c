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
	char MM[2] ;
	char DD[2] ;
	int YYYY ;
	
	printf("輸入國慶日的日期(MM/DD/YYYY): ");
	scanf("%2s/%2s/%d",&MM,&DD,&YYYY);
	printf("%d%s%s",YYYY,MM,DD);
		
	return 0 ;
}
