/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp1,*fp2,*fps,*op;
	char fn1[501],fn2[501],fns[501],c;
	int ch[26]={0},i,j;
	scanf("%s",&fn1);
	scanf("%s",&fn2);
	scanf("%s",&fns);
	
	fp1=fopen(fn1,"r");
	fp2=fopen(fn2,"r");
	fps=fopen(fns,"w");
	op=fopen(fns,"a");
	
	while(fscanf(fp1,"%c",&c)!=EOF){
		ch[c-97]++;
	}
	while(fscanf(fp2,"%c",&c)!=EOF){
		ch[c-97]++;
	}
	
	for(i=0;i<26;i++){
		for(j=0;j<ch[i];j++){
			
			fprintf(op,"%c",97+i);
		}
	}
	
	return (0);
}
