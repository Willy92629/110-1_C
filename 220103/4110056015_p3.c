/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int a1,a2,sum;
	char fn[501],c;
	scanf("%s",&fn); 
	fp=fopen(fn,"w");
	
	scanf(" %c",&c);
	//c='\0';
	while(c!='\n'){
		fprintf(fp,"%c",c);
		scanf("%c",&c);
	}
	return(0);
}
