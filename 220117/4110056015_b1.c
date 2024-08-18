/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
 
int main(){
	unsigned long long int N,com=0;
	scanf("%llu",&N);
	if(N<1000){
		com=0;
	}
	if(N>1000){
		com+=(N-999);
	}
	if(N>1000000){
		com+=(N-999999);
	}
	if(N>1000000000){
		com+=(N-999999999);
	}
	if(N>1000000000000){
		com+=(N-999999999999);
	}
	if(N>1000000000000000){
		com+=(N-999999999999999);
	}
	printf("%llu",com);
	
	return (0);
}
