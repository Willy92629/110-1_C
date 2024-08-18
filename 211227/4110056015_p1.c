/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
struct data {
	char C;
	int Num;
};

int main(){
	int i,r;
	struct data s1[100];
	scanf("%d",&r);
	for(i=0;i<r;i++){
		scanf(" %c %d",&s1[i].C,&s1[i].Num);
	}
	
	for(i=0;i<r;i++){
		printf("%c %d\n",s1[i].C,s1[i].Num);
	}
	
	return (0);
}
