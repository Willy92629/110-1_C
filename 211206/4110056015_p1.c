/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int *bubble_sort(int*,int);

int main(){
	int N,i;
	scanf("%d",&N);
	int str[20];
	
	for(i=0;i<N;i++){
		scanf("%d",str+i);
	}
	
	bubble_sort(str,N);	
	
	for(i=0;i<N;i++){
		printf("%d ",*(str+i));
	}
	return (0);
	
} 
int *bubble_sort(int *s,int N){
	int i,j,temp;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i-1;j++){
			if(*(s+j)>*(s+j+1)){
				temp=*(s+j);
				*(s+j)=*(s+j+1);
				*(s+j+1)=temp;
			}
		}
	}
	return (s);
}
