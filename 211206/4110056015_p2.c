/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N=0,i,j;
	char s[105];
	for(i=0;i<51;i++){
		scanf("%c",s+i);
		if(*(s+i)=='\n'){
			break;
		}
		N++;
	}
	for(i=0;i<N;i++){
		*(s+N+i)=*(s+i);
	}
	
	for(i=1;i<=N;i++){
		for(j=0;j<N;j++){
			printf("%c",*(s+i+j));
		}
		printf("\n");
	}
	return (0);
}
