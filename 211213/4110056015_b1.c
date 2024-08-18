/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int *bubble_sort(int*,int);
int main(){
	int i,j,k=0,N;
	scanf("%d",&N);
	
	int *str;
	int dynum=N;
	str=(int *) malloc(dynum*sizeof(int) );
	
	for(i=0;i<N;i++){
		scanf("%d",str+i);
	}
	
	bubble_sort(str,N);	
	
	for(i=0;i<sqrt(N);i++){
		for(j=0;j<sqrt(N);j++){
			printf("%d ",*(str+k));
			k++;
		}
		printf("\n");
	}
	return (0);
	
}
int *bubble_sort(int *s,int N){
	int i,j,temp;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i-1;j++){
			if(*(s+j)>*(s+j+1)){
				temp=*(s+j);
				*(s+j)=*(s+j+1);
				*(s+j+1)=temp;
			}
		}
	}
	return (s);
}
