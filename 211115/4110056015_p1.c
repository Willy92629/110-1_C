/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int reve(int);

int main()
{
	int n,res;
	scanf("%d",&n);
	reve(n);	
}

int reve(int n)
{
	int m,z=0;
	while(n>0){
		m=n%10;
		if(z==0&&m==0){
		}else{
			printf("%d",m);
			z=1;
		}
		n/=10;
	}
}
