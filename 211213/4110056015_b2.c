/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	char a,b;
	scanf("%c ",&a);
	b=a;
	while(a!='\n'){
		scanf("%c",&a);
		if(b==a){
			i++;
		}else{
			printf("%c%d",b,i+1);
			i=0;
		}
		b=a;
	}
}
