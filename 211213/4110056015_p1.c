/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h> 
int Max(int*,int);

int main(){
	int arr[1000];
	int i,N,max;
	scanf("%d",&N);
	arr[0]=1;
	
	for(i=1;i<N;i++){
		arr[i]=(arr[i-1]*7985+96*N)%(3000+N);
	}
	
	max=Max(arr,N);
	
	printf("%d",max);	
	return (0);
}
int Max(int *arr,int n){
	int i,max=1;
	for(i=1;i<n;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
		}
	}
	return (max);
} 
