/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>
int DtoBi(unsigned long long int);

int main()
{
	unsigned long long int d;
	scanf("%llu",&d);
	DtoBi(d);
}

int DtoBi(unsigned long long int d){
	int i,fo=0;
	unsigned long long int b;
	for(i=63;i>=0;i--){
		b=d>>i;
		if(b & 1){
			printf("1");
			fo=1;
		}else{
			if(fo==1)
				printf("0");
		}
	}
}
