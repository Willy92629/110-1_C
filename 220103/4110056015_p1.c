/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

struct data {
	char a[501];
	int t;
}fn[11];

int main(){
	int i,N;
	int sc[11];
	FILE *fp;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%s",&fn[i].a);
		if((fp = fopen(fn[i].a,"r"))!= NULL){
			fn[i].t=1;
		}else{
			fn[i].t=0;
		}
	}
	
	for(i=0;i<N;i++){
		if(fn[i].t){
			printf("%s opened successfully\n",fn[i].a);
		}else{
			printf("%s opened failed\n",fn[i].a);
		}
	}
	
	return (0);
}
