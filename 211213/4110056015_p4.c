/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n=0;
	char str[3001]={'\0'};
	
	while(gets(str)){
		for(i=0;i<(int)strlen(str);i++){
			if(str[i]>=97&&str[i]<=122){
				str[i]-=32;
			}else if(str[i]>=65&&str[i]<=90){
				str[i]+=32;
			}
		}
		printf("%s\n",str);
	}
	
	return (0);
}
