/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int S,T,X,at=0;
	scanf("%d %d %d",&S,&T,&X);
	if(S<T){
		if(X<T&&X>=S){
			at=1;
		}
	}else if(S>T){
		if(X<T){
			at=1;
		}
		T+=24;
		if(X>=S&&T>X){
			at=1;
		}
	}
	
	if(at==1){
		printf("Yes");
	}else{
		printf("No");
	}
		
	return(0);
}
