/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>
long long int F(int);

int main(){
	int n;
	long long int res;
	scanf("%d",&n);
	
	res=F(n);
	printf("%lld",res);
}

long long int F(int n){
	if(n==1||n==2||n==3){
		return (1);
	}else if(n>=4){
		return(4*F(n-1)+3*F(n-2)-2*F(n-3));
	} 
}
