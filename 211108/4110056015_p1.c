/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,dig=0;
	scanf("%d",&n);
	
	if(n<0){
		printf("negative");
	}else if(n==0){
		printf("zero");
	}else if(n>0){
		for(i=1;i<=10;i++){
			if(n>0){
				n/=10;
				dig++;
			}else{
				break;
			}
		}
		printf("%d",dig);
	}
	return 0;
}
