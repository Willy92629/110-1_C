/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
long long int pwr(int,int);

int main()
{
	long long int n,b,i,res=0;
	scanf("%lld %lld",&n,&b);
	for(i=10;i>=0;i--){
		res+=n/pwr(b,i)*pwr(10,i);
		n-=(n/pwr(b,i))*pwr(b,i);
	}
	printf("%lld",res);
}

long long int pwr(int a,int n){
	long long int i,res=1;
	if(n==0){
		return(1);
	}else{
		for(i=1;i<=n;i++){
			res*=a;
		}
		return (res);
	}	
	
}
