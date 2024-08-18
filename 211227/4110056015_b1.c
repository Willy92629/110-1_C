/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

struct array{
	char C[100];
	char D[100];
};
void disp(struct array *arr);

int main(){
	int a,i,N;
	struct array Ch;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf(" %c",&Ch.C[i]);
	}
	for(i=0;i<N;i++){
		scanf(" %c",&Ch.D[i]);
	}
	
	for(i=0;i<N;i++){
		printf("%c%c",Ch.C[i],Ch.D[i]);
	}
	return (0);
}
