/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void de(int,int,int*,int*);

int main(){
	int N,M,pN,pM;
	scanf("%d/%d",&N,&M);
	pN=N;
	pM=M;
	de(N,M,&pN,&pM);
	printf("%d/%d",pN,pM);
}

void de(int N,int M,int *pN,int *pM){
	int temp;
	if(N>=M){
		while(M!=0){
			temp=N%M;
			N=M;
			M=temp;
		}
		*pN/=N;
		*pM/=N; 
	}else{
		while(N!=0){
			temp=M%N;
			M=N;
			N=temp;
		}
		*pN/=M;
		*pM/=M;
	}

}
