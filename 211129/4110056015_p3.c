/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
int* max(int*,int);

int main(){
	int i,dig;
	scanf("%d",&dig);
	int num[101];
	for(i=1;i<=dig;i++){
		scanf("%d",&num[i]);
	}
	int *Pmax=max(num,dig);
	printf("%d",*Pmax);
}

int *max(int *a,int n){
	int i,*max;
	*max=a[1];
	for(i=1;i<=n;i++){
		if(a[i]>*max){
			*max=a[i];
			max=&a[i]; 
		}
	}
	return (max);
}
