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
	int i,input;
	int inp[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int num[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d",&input);
	
	for(i=0;i<=9;i++){
		if(input==0)
			break;
		inp[i]=input%10;
		input/=10;
	}
	
	for(i=0;i<=9;i++){
		switch(inp[i]){
			case 0:
				num[0]++;
				break;
			case 1:
				num[1]++;
				break; 
			case 2:
				num[2]++;
				break;
			case 3:
				num[3]++;
				break;
			case 4:
				num[4]++;
				break;
			case 5:
				num[5]++;
				break;
			case 6:
				num[6]++;
				break;
			case 7:
				num[7]++;
				break;
			case 8:
				num[8]++;
				break;
			case 9:
				num[9]++;
				break;
		}
	}
	for(i=0;i<=9;i++){
		printf("%d ",num[i]);
	}
}
