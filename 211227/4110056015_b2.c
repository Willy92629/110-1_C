/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int brk,i,N,s=1,R[200000];
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&R[i]);
		if(R[i]==s){
			s++;
		}else{
		brk++;
		}
	}
	if(brk==N){
		printf("-1");
	}else{
		printf("%d",brk);
	}
	return(0);
}
