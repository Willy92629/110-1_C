/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	swap(&N,&M);
	printf("%d %d",N,M);
}

void swap(int *p1,int *p2){
	int temp=*p1;
	*p1=*p2;
	*p2=temp; 
}
