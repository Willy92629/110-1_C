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
	int S ;
	int a ;
	int b ;
	int c ;
	
	scanf("%d",&S);
	c = S%10;
	b = ((S-c)/10)%10 ;
	a = S/100;
	printf("%d\n%d\n%d",c,b,a);
	
}
