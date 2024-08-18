/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
unsigned long long C(int,int);

int main(){
	int n,i;
	unsigned long long res;
	scanf("%d",&n);
	
	if(n%2==0){
		res=C(n/2,2)*C(n/2,1)+C(n/2,3);
	}else{
		res=C((n/2)+1,2)*C(n/2,1)+C(n/2,3); 
	}
	
	printf("%lld",res);
	return (0);
}

unsigned long long C(int m,int n){
	if(n>m){
		return (0);
	}else if(n==0||n==m){
		return (1);
	}else{
		return (C(m-1,n)+C(m-1,n-1));
	}
}
