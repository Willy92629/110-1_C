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
	float x;
	float y;
	float R1;
	float R2;
	float R3;
	
	scanf("%f\n%f",&x,&y);
	
	R1 = y*y +5*y+8 ;
	R2 = x*x +5*x*y+y ;
	R3 = x*x*y +5*y -4 / (x + y + 1) ;
	
	printf("%.2f\n%.2f\n%.2f",R1,R2,R3);
	
	return 0;
}
