/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>

int main()
{
	int i,shift;
	char c;
	scanf("%d",&shift);
	for(i=0;i<10000;i++){
    	scanf("%c",&c);
    	if(c=='\n'&&i!=0)
    		break;
    	c+=shift;
    	if(c>90){
    		c-=26;
    	}
    	printf("%c",c);
	}
	return 0;
}
