/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strrt(char*,int); 

int main(){
	int i,j,len;
	char temp,S[1001],Max[1001],Min[1001];
	scanf("%s",&S);
	len=strlen(S);
	strcpy(Max,S);
	strcpy(Min,S);
	for(i=0;i<len;i++){
		strrt(S,len);
		if(strcmp(Min,S)==1){
			strcpy(Min,S);
		}
		
		if(strcmp(S,Max)==1){
			strcpy(Max,S);
		}
		//printf("%s\n",S);
	}
	
	printf("%s\n%s",Min,Max);
	
	return(0);
}

void strrt(char* a,int b){
	int i;
	char temp=*a;
	for(i=0;i<b-1;i++){
		*(a+i)=*(a+i+1);
	}
	*(a+b-1)=temp;
}
