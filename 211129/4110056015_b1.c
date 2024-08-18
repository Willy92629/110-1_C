/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,dig,no=0;
	scanf("%d",&dig);
	int num[3000];
	for(i=0;i<dig;i++){
		scanf("%d",&num[i]);
	}
	for(i=1;i<dig;i++){
		if(num[i]>=num[i-1]){
			if((num[i]-num[i-1])>dig-1||(num[i]-num[i-1])<1){
				no=1;
				break;
			}
		}else{
			if((num[i-1]-num[i])>dig-1||(num[i-1]-num[i])<1){
				no=1;
				break;
			}
		} 
	}
	if(no==0){
		printf("Jolly");
	}else{
		printf("Not jolly");
	}
}
