//transpose matrix

#include <stdio.h> 

int main()
{
	int i, j, row, col;
	int matrix[51][51];
	
	for(i=0; i<51; i++){
		for(j=0; j<51; j++){
			matrix[i][j] = 0;
		}
	}
	
	scanf("%d %d", &row, &col);
	
	for(i=1; i<=row; i++){
		for(j=1; j<=col; j++){
			scanf("%d", &matrix[j][i]);
		}
	}
	
	for(i=1; i<=col; i++){
		for(j=1; j<=row; j++){
			printf("%d ", matrix[i][j]);
		}
	
		printf("\n");
	}

	return 0;
}
