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
	int i,seed,res,j;
	scanf("%d %d",&i,&seed);
	srand(seed);
	
	for(j=1;j<=i;j++){
		res=(rand()%100)+1;
	}
	
	printf("%d",res);
	return (0);
}
