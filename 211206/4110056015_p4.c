/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i;
	int A[200000];
	scanf("%d",&N);
	scanf("%d",&A[0]);
	int max=A[0],imax=0,max2=A[0],imax2=0; 
	for(i=1;i<N;i++){
		scanf("%d",&A[i]);
		if(A[i]>max){
			max=A[i];
			imax=i;
		}else if(A[i]>max2){
			max2=A[i];
			imax2=i;
		}
	}

	for(i=0;i<N;i++){
		if(i!=imax){
			printf("%d\n",max);
		}
		if(i==imax){
			printf("%d\n",max2);
		}
	}
}
