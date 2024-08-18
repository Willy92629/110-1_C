/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n=0;
	char str[20][55]={'\0'},res[55][22]={'\0'};
	
	while(gets(str[n])){
		if(str[n]=="\n"){
			break;
		}else{
			n++;
		}
	}
	
	for(i=0;i<20;i++){
		for(j=0;j<51;j++){
			res[j][i]=str[i][j];
		}
	}
	
	for(i=0;i<51;i++){
		for(j=0;j<21;j++){
			printf("%c",res[i][j]);
		}
		printf("\n");
	}
	
	return (0);
}
