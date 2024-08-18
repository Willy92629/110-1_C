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
void add(struct array *ar1,struct array *ar2,struct array *res);

int main(){
	int a,i;
	struct array s1,s2,s3;
	scanf("%d",&s1.size);
	s3.size=s1.size;
	for(i=0;i<s1.size;i++){
		scanf(" %d",&s1.data[i]);
	}
	for(i=0;i<s1.size;i++){
		scanf(" %d",&s2.data[i]);
	}
	add(&s1,&s2,&s3);
	disp(&s3);
	return (0);
}

void disp(struct array *arr){
	int i;
	for(i=0;i<arr->size;i++){
		printf("%d ",arr->data[i]);
	}
}

void add(struct array *ar1,struct array *ar2,struct array *res){
	int i;
	for(i=0;i<ar1->size;i++){
		res->data[i]=ar1->data[i]+ar2->data[i];
	}	
}
