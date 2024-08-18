/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int a1,a2,sum;
	char fn[501],c;
	scanf("%s",&fn); 
	fp=fopen(fn,"w");
	
	scanf(" %c",&c);
	//c='\0';
	while(c!='\n'){
		fprintf(fp,"%c",c);
		scanf("%c",&c);
	}
	return(0);
}
