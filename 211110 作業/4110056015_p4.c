/*
系級：資工系 1年級 
學號：4110056015 
姓名：許家紳 
聯絡電子郵件：willyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>
unsigned long long int P(int,int);

int main(){
	int x,n;
	unsigned long long int res;
	scanf("%d %d",&x,&n);
	
	res=P(x,n);
	printf("%llu",res);
}

unsigned long long int P(int x,int n){
	if(n>0){
		return (x*P(x,n-1));
	}else if(n==0){
		return (1);
	}
}
