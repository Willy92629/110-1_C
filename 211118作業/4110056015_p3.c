/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void bub(int a[]);

int main(){
	int i;
	int inp[10];
	
	for(i=0;i<10;i++){
		scanf("%d",&inp[i]);
	}
	bub(inp);
	
	return (0);
}

void bub(int a[]){
	int i,j,temp;
	for(i=1;i<10;i++){
		for(j=0;j<(10-i);j++){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
