/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i,wr=0;
	int sn[100];
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&sn[i]);
		if(sn[i]!=i){
			wr++;
		}
	}
	
	if(wr==0||wr==2){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return (0);
} 
