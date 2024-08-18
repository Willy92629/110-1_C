/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	char a,b;
	scanf("%c ",&a);
	b=a;
	while(a!='\n'){
		scanf("%c",&a);
		if(b==a){
			i++;
		}else{
			printf("%c%d",b,i+1);
			i=0;
		}
		b=a;
	}
}
