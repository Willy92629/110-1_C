/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j;
	unsigned long long int fac=1;
	int k;
	
	scanf("%d",&n);
	
	for(i=0;i<=20;i++){
		fac=1;
		for(j=1;j<=i;j++){
			fac*=j;
		}
		if((fac%n)==0){
		k=i;
		break;
		}
	}
	
	printf("%d",k);
	
	return 0;
}
