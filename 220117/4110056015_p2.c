/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned long long int A,B,a,b,H=0;
	scanf("%llu %llu",&A,&B);
	a=A%10;
	b=B%10;
	A/=10;
	B/=10;
	
	while(A != 0 || B != 0){
		if(a+b>=10){
			H=1;
			break;
		}
		
		a=A%10;
		b=B%10;
		A/=10;
		B/=10;
	}
	
	if(H==1){
		printf("Hard");
	}else{
		printf("Easy");
	}
	return (0);
}
