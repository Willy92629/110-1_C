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
	int n,i;
	char c;
	//scanf("%c",c);
	
	while(1){
		scanf("%c",&c);
		if(c!='\n'){
			scanf("%d",&n);
		}else{
			break;
		}
		for(i=1;i<=n;i++){
			printf("%c",c);
		}
	}
	
	return 0;
}
