/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,dig=0;
	char num[250];
	char c;
	scanf(" %c",&c);
	while(c != '.'&&c !='\n'){
		num[dig]=c;
		dig++;
		scanf("%c",&c);
	}
	for(i=0;i<dig;i++){
		printf("%c",num[i]);
	}
	return (0);
}
