/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
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
