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
	int n1,n2,n3,n4,n5,n6,n7,n8,n9;
	int i,next=1,sum,rep=0;
	
	scanf("%d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
		
	for(i=1;i<=9;i++){
		switch(next){
			case 1 :
				if(rep==1)
					break;
				sum+=n1;
				next=n1;
				rep++;
				break;
			case 2 :
				sum+=n2;
				next=n2;
				break;
			case 3 :
				sum+=n3;
				next=n3;
				break;
			case 4 :
				sum+=n4;
				next=n4;
				break;
			case 5 :
				sum+=n5;
				next=n5;
				break;
			case 6 :
				sum+=n6;
				next=n6;
				break;
			case 7 :
				sum+=n7;
				next=n7;
				break;
			case 8 :
				sum+=n8;
				next=n8;
				break;
			case 9 :
				sum+=n9;
				next=n9;
				break;
		}
	}
	printf("%d",sum);
	return 0;
}
