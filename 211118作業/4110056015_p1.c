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
	int num[26] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char temp;
	int i,j;
	
	while(1){
		scanf("%c",&temp);
		if(temp =='\n')
			break;
		switch(temp){
			case'a':
				num[0]+=1;
				break;
			case'b':
				num[1]+=1;
				break;
			case'c':
				num[2]+=1;
				break;
			case'd':
				num[3]+=1;
				break;
			case'e':
				num[4]+=1;
				break;
			case'f':
				num[5]+=1;
				break;
			case'g':
				num[6]+=1;
				break;
			case'h':
				num[7]+=1;
				break;
			case'i':
				num[8]+=1;
				break;
			case'j':
				num[9]+=1;
				break;
			case'k':
				num[10]+=1;
				break;
			case'l':
				num[11]+=1;
				break;
			case'm':
				num[12]+=1;
				break;
			case'n':
				num[13]+=1;
				break;
			case'o':
				num[14]+=1;
				break;
			case'p':
				num[15]+=1;
				break;
			case'q':
				num[16]+=1;
				break;
			case'r':
				num[17]+=1;
				break;
			case's':
				num[18]+=1;
				break;
			case't':
				num[19]+=1;
				break;
			case'u':
				num[20]+=1;
				break;
			case'v':
				num[21]+=1;
				break;
			case'w':
				num[22]+=1;
				break;
			case'x':
				num[23]+=1;
				break;
			case'y':
				num[24]+=1;
				break;
			case'z':
				num[25]+=1;
				break;
		}	
	}
	
	for(i=0;i<26;i++){
		for(j=1;j<=num[i];j++)
			printf("%c",97+i);
	}
	return (0);
}
