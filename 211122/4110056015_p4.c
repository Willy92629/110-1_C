/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,rep=0,dig=0;
	char A[100];
	for(i=0;i<100;i++){
		scanf("%c",&A[i]);
		if(A[i]=='\n'){
			break;
		}
		dig++;
	}
	for(i=0;i<dig;i++){
		if(A[i]==A[dig-i-1]){
			rep++;
		}
	}
	
	if(rep==dig){
		printf("YES");
	}else{
		printf("NO");
	}
}
