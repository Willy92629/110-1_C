/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

struct data {
	char a[501];
	int t;
}fn[11];

int main(){
	int i,N;
	int sc[11];
	FILE *fp;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%s",&fn[i].a);
		if((fp = fopen(fn[i].a,"r"))!= NULL){
			fn[i].t=1;
		}else{
			fn[i].t=0;
		}
	}
	
	for(i=0;i<N;i++){
		if(fn[i].t){
			printf("%s opened successfully\n",fn[i].a);
		}else{
			printf("%s opened failed\n",fn[i].a);
		}
	}
	
	return (0);
}
