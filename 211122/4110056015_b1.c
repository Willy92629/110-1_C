/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,c=0;
	unsigned long long int res=1,res1=1,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lld",&temp);
		res1=res;
		res*=temp;			
		if(res>1000000000000000000||res1>res){
			c=1;
		}
	}
	if(c==1&&res!=0){
		printf("-1");
	}else{
		printf("%lld",res);
	}
	
}
