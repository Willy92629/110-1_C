/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int a1,a2,sum;
	char fn[501];
	scanf("%s",&fn); 
	fp=fopen(fn,"r");
	while(fscanf(fp," %d %d",&a1,&a2) != EOF){
		sum=a1+a2;
		printf("%d\n",sum);
	}
	return(0);
}
