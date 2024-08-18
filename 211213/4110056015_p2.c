/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h> 
int *Max(int*,int);

int main(){
	int *ptr;
	int dynum=1000;
	ptr=(int *) malloc(dynum*sizeof(int) );
	
	int i,N,*max;
	scanf("%d",&N);
	*ptr=1;
	
	for(i=1;i<N;i++){
		*(ptr+i)=(*(ptr+i-1)*7985+96*N)%(3000+N);
	}
	
	max=Max(ptr,N);
	
	printf("%d",*max);
	return (0);
}
int *Max(int *arr,int n){
	int i,max=1;
	int *loc;
	for(i=1;i<n;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
			loc=arr+i;
		}
	}
	return (loc);
} 
