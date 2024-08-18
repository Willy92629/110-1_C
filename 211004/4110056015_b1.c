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
	float x;
	float y;
	float R1;
	float R2;
	float R3;
	
	scanf("%f\n%f",&x,&y);
	
	R1 = y*y +5*y+8 ;
	R2 = x*x +5*x*y+y ;
	R3 = x*x*y +5*y -4 / (x + y + 1) ;
	
	printf("%.2f\n%.2f\n%.2f",R1,R2,R3);
	
	return 0;
}
