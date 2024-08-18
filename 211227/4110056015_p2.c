/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
struct data {
	char C;
	int Num;
};

int main(){
	int i,j,r;
	struct data s1[100],temp;
	//struct data s2[100];
	scanf("%d",&r);
	for(i=0;i<r;i++){
		scanf(" %c %d",&s1[i].C,&s1[i].Num);
	}
	
	for(i=0;i<r;i++){
		for(j=1;j<r;j++){
			if(s1[j-1].Num>s1[j].Num){
				temp=s1[j];
				s1[j]=s1[j-1];
				s1[j-1]=temp;
			}
		}
	}
	
	for(i=0;i<r;i++){
		printf("%c %d\n",s1[i].C,s1[i].Num);
	}
	
	return (0);
}
