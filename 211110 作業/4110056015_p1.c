/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>
int A(int,int);

int main()
{
	int m,n,res;
	scanf("%d %d",&m,&n);
	
	res=A(m,n);
	printf("%d",res);	
} 

int A(int m,int n){
	if(m==0){
		return (n+1);
	}else if(m>0&&n==0){
		return (A(m-1,1));
	}else if(m>0&&n>0){
		return (A(m-1,A(m,n-1)));
	}
}
