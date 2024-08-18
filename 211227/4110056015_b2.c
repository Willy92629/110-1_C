/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int brk,i,N,s=1,R[200000];
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&R[i]);
		if(R[i]==s){
			s++;
		}else{
		brk++;
		}
	}
	if(brk==N){
		printf("-1");
	}else{
		printf("%d",brk);
	}
	return(0);
}
