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
	char str[3001]={'\0'};
	
	while(gets(str)){
		for(i=0;i<(int)strlen(str);i++){
			if(str[i]>=97&&str[i]<=122){
				str[i]-=32;
			}else if(str[i]>=65&&str[i]<=90){
				str[i]+=32;
			}
		}
		printf("%s\n",str);
	}
	
	return (0);
}
