/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,next=1,res=0;
	scanf("%d",&n);
	int A[101];
	int Cnt[101];
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	while(1){
		res+=A[next];
		next=A[next];
		if(next==1)
			break;
	}
	printf("%d",res);
}
