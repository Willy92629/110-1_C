/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 3
#define P 5
int mul(int A,int B);

int main(){
	int i,j,k;
	int A[M][N],B[N][P],C[M][P];
	srand(200);
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			A[i][j]=(rand()%16)-5;
		}
	}
	srand(300);
	for(i=0;i<N;i++){
		for(j=0;j<P;j++){
			B[i][j]=(rand()%21)-10;
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<P;j++){
			C[i][j]=0;
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<P;j++){
			for(k=0;k<N;k++)
				C[i][j]+=mul(A[i][k],B[k][j]);
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<P;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}
int mul(int A,int B){
	int c;
	c=A*B;
	return (c);
}
