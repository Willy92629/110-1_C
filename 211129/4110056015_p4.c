/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void reve(int*,int*,int);

int main(){
	int i,dig;
	scanf("%d",&dig);
	int num[101];
	int rev[101];
	for(i=1;i<=dig;i++){
		scanf("%d",&num[i]);
	}
	
	reve(num,rev,dig);
	for(i=1;i<=dig;i++){
		printf("%d ",rev[i]);
	}
}

void reve(int *a,int *b,int n){
	int i;
	for(i=1;i<=n;i++){
		b[i]=a[n-i+1];
	}
}
