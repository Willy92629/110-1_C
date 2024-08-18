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
	int a,i,shift,H=0;
	char S1,S[100010],T1,T[100010];
	scanf("%s",&S);
	scanf("%s",&T);
	S1=S[0];
	T1=T[0];
	
	a=T1-S1;
	
	//printf("%d ",a);
	for(i=0;i<strlen(S);i++){
		shift=S[i]+a;
		//printf("%d ",shift);
		if(shift>122){
			shift-=26;
		}else if(shift<97){
			shift+=26;
		}
		//printf("%d ",shift);
		if(T[i]==shift){
		}else{
			H=1;
			break;
		}
	}
	
	if(H==1){
		printf("No");
	}else{
		printf("Yes");
	}
	
	return (0);
}
