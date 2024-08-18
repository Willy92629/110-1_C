/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
int m,n,p;
void mul(int(*A)[10],int(*B)[10],int(*ret)[10]);

int main(){
	int i,j,k;
	int A[10][10],B[10][10],ret[10][10]={{0}};
	scanf("%d %d %d",&m,&n,&p);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",(*(A+i)+j));
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%d",(*(B+i)+j));
		}
	}
	
	mul(A,B,ret);

	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("%d ",*(*(ret+i)+j));
		}
		printf("\n");
	}
	
	
	
	
}
void mul(int(*A)[10],int(*B)[10],int(*ret)[10]){
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			for(k=0;k<n;k++){
				*(*(ret+i)+j)+=(*(*(A+i)+k))*(*(*(B+k)+j));
			}
		}
	}
}
