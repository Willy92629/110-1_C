/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

struct data {
	char name[100]; 	//�ǥͩm�W
	int CP; 			//�{���]�p���Z
	int calculus;		//�L�n�����Z
	int probability;	//���v���Z
	int sum;
}*scr;

void sort(int n, struct data* students);
int main(){
	int i,j,N;
		
	scanf("%d",&N);
	scr=(struct data *) malloc(N*sizeof(struct data));
	
	for(i=0;i<N;i++){
		scanf(" %s %d %d %d",&(scr+i)->name,&(scr+i)->CP,&(scr+i)->calculus,&(scr+i)->probability);
		(scr+i)->sum=(scr+i)->CP+(scr+i)->calculus+(scr+i)->probability;
	}
	sort(N,scr);
	for(i=0;i<N;i++){
		printf("%s %d %d %d\n",((scr+i)->name),((scr+i)->CP),((scr+i)->calculus),((scr+i)->probability));
	}
	
	free(scr);
	return (0);
}
void sort(int n, struct data* scr){
	int i,j;
	struct data temp;
	
	for(j=0;j<n;j++){
		for(i=1;i<n;i++){
			if((scr+i-1)->sum < (scr+i)->sum){
				temp = *(scr+i);
				*(scr+i)=*(scr+i-1);
				*(scr+i-1)=temp;
			}
		}
	}
}
