/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
struct data {
	char C;
	int Num;
};

int main(){
	int i,r;
	struct data s1[100];
	scanf("%d",&r);
	for(i=0;i<r;i++){
		scanf(" %c %d",&s1[i].C,&s1[i].Num);
	}
	
	for(i=0;i<r;i++){
		printf("%c %d\n",s1[i].C,s1[i].Num);
	}
	
	return (0);
}
