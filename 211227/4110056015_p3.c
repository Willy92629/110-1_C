/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct array{
	int size;
	int data[SIZE];
};
void disp(struct array *arr);

int main(){
	int a,i;
	struct array s1;
	scanf("%d",&s1.size);
	for(i=0;i<s1.size;i++){
		scanf(" %d",&s1.data[i]);
	}
	disp(&s1);
	return (0);
}
void disp(struct array *arr){
	int i;
	for(i=0;i<arr->size;i++){
		printf("%d ",arr->data[i]);
	}
}
