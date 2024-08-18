/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

struct data {
	char name[100]; 	//學生姓名
	int CP; 			//程式設計成績
	int calculus;		//微積分成績
	int probability;	//機率成績
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
