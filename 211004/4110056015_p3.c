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
	float F ;
	float C ;
	printf("請輸入攝氏溫度：");
	scanf("%f",&C);
	
	F = C*9.0/5.0+32 ; 
	//C = (F-32)*5.0/9.0;
	printf("華氏溫度：%.2f",F);
	
	
	return 0;
}
