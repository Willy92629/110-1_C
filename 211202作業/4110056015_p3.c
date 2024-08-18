/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>

int main()
{
	int i,shift;
	char c;
	scanf("%d",&shift);
	for(i=0;i<10000;i++){
    	scanf("%c",&c);
    	if(c=='\n'&&i!=0)
    		break;
    	c+=shift;
    	if(c>90){
    		c-=26;
    	}
    	printf("%c",c);
	}
	return 0;
}
