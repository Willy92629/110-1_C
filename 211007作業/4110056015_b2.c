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
	int S;
	int a;
	int b;
	int c;
	int d;
	int R;
	
	scanf("%d",&S);
	d = S%10;
	c = ((S-d)/10)%10;
	b = ((S-10*c-d)/100)%10 ;
	a = S/1000;
	R = a + 10*d + 100*c + 1000*b;
	
	printf("%d",R);
	
}
