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
	int N1,N2,N3;
	char C1,C2;
	int R=0;
	
	scanf("%d%c%d%c%d",&N1,&C1,&N2,&C2,&N3);
	
	switch(C1)
	{
	case'+':
		R=N1+N2;
		break;
	case'-':
		R=N1-N2;
		break;
	case'*':
		R=N1*N2;
		break;
	}
	switch(C2)
	{
	case'+':
		R=R+N3;
		break;
	case'-':
		R=R-N3;
		break;
	case'*':
		R=R*N3;
		break;
	}
		
	printf("%d",R);
	
}
