/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
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
