/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char MM[2] ;
	char DD[2] ;
	int YYYY ;
	
	printf("��J��y�骺���(MM/DD/YYYY): ");
	scanf("%2s/%2s/%d",&MM,&DD,&YYYY);
	printf("%d%s%s",YYYY,MM,DD);
		
	return 0 ;
}
