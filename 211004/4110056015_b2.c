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
	int n;
	int m;
	int r;
	int c;
	
	scanf("%d %d",&n,&m);
	
	r = (m-2*n)/2 ;
	c = n-r ;
	
	printf("%d\n%d",r,c);
	
	return 0;
}
