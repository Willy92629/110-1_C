/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
	int i,j,chg,minC=100000;
	char S[1010],T[1010];
	scanf("%s",&S);
	scanf("%s",&T);
	
	for(i=0;i<(strlen(S)-strlen(T)+1);i++){
		for(j=0;j<strlen(T);j++){
			if(S[i+j] != T[j]){
				chg++;
			}
		}		
		if(chg<minC){
			minC=chg;
		}
		if(minC==0){
			break;
		}
		chg=0;
	}
	
	printf("%d",minC);
	
	return (0);
}
