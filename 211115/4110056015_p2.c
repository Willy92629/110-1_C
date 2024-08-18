/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int caps(char);

int main()
{
	char c;
	int a;
	scanf("%c",&c);
	a=caps(c);
	if(a==1){
		printf("Yes");
	}else{
		printf("No");
	}
}

int caps(char c){
	if(c>=65&&c<=90){
		return (1);
	}else{
		return (0);
	}
}
