/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,rep;
	char a[3];
	scanf("%c%c%c",&a[0],&a[1],&a[2]);
	
	for(i=1;i<3;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				rep++;
			}
		}
	}
	if(rep==0){
		printf("%d",6/(rep+1));
	}else{
		printf("%d",6/(rep*2));
	}
	
	return (0);
}
