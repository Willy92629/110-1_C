/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j,N,sev=0,all=0,temp;
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		j=i;
		temp=j%10;
		while(!(temp==0&&j==0)){
			temp=j%10;
			if(temp==7){
				sev++;
				break;
			}
			j/=10;
		}
		
		j=i;
		temp=j%8;
		while(!(temp==0&&j==0)){
			temp=j%8;
			if(temp==7){
				sev++;
				break;
			}
			j/=8;
		} 
		
		if(sev==0){
			all++;
		}
		sev=0;
	}
	
	printf("%d",all);
	
	return(0);
}

