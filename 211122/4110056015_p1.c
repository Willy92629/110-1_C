/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,d,m;
	scanf("%d %d",&d,&m);
	int o[50][50], t[50][50];
	
	for(i=0;i<d;i++){
		for(j=0;j<m;j++){
			scanf("%d",&o[i][j]);
			t[j][i]=o[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<d;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
} 
