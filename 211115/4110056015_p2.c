/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int caps(char);

int main()
{
	char c;
	int a;
	scanf("%c",&c);
	a=caps(c);
	if(a==1){
		printf("Yes");
	}else{
		printf("No");
	}
}

int caps(char c){
	if(c>=65&&c<=90){
		return (1);
	}else{
		return (0);
	}
}
