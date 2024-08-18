/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i,wr=0;
	int sn[100];
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&sn[i]);
		if(sn[i]!=i){
			wr++;
		}
	}
	
	if(wr==0||wr==2){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return (0);
} 
