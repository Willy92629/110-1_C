#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 3
#define P 5

int matrix_mul(int a[][N], int b[][P], int c[][P]){
	int i, j, k;
	
	for(i=0; i<M; i++){
		for(j=0; j<P;j++){
			for(k=0; k<N; k++){
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	
}

int main()
{
	int i, j;
	int A[M][N], B[N][P];
	int C[M][P];
	
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			A[i][j] = 0;
		}
		for(j=0; j<P; j++){
			C[i][j] = 0;
		}
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<P; j++){
			B[i][j] = 0;
		}
	}
	
	srand(200);
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			A[i][j] = rand()%16-5;
		}
	}
	srand(300);
	for(i=0; i<N; i++){
		for(j=0; j<P; j++){
			B[i][j] = rand()%21-10;
		}
	}
	
	matrix_mul(A, B, C);
	
	for(i=0; i<M; i++){
		for(j=0; j<P; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
