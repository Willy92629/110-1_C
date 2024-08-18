/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int* max(int*,int);

int main(){
	int i,dig;
	scanf("%d",&dig);
	int num[101];
	for(i=1;i<=dig;i++){
		scanf("%d",&num[i]);
	}
	int *Pmax=max(num,dig);
	printf("%d",*Pmax);
}

int *max(int *a,int n){
	int i,*max;
	*max=a[1];
	for(i=1;i<=n;i++){
		if(a[i]>*max){
			*max=a[i];
			max=&a[i]; 
		}
	}
	return (max);
}
