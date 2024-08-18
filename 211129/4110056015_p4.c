/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void reve(int*,int*,int);

int main(){
	int i,dig;
	scanf("%d",&dig);
	int num[101];
	int rev[101];
	for(i=1;i<=dig;i++){
		scanf("%d",&num[i]);
	}
	
	reve(num,rev,dig);
	for(i=1;i<=dig;i++){
		printf("%d ",rev[i]);
	}
}

void reve(int *a,int *b,int n){
	int i;
	for(i=1;i<=n;i++){
		b[i]=a[n-i+1];
	}
}
