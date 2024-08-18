/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,N,rep=0,cnt=0;
	scanf("%d",&N);
	int num[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i;j++){
			if(num[i]==num[j]){
				cnt++;
			}
		}
		if(cnt!=0)
			rep++;
		cnt=0;
	}
	printf("%d",N-rep);
}

