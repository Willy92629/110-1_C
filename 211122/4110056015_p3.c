/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void seq(int A[],int);
int main(){
	int i,j,a,b,temp;
	scanf("%d",&a);
	int A[200]={0};
	for(i=0;i<a;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&A[i+a]);
	}
	int n=a+b;
	for(i=1;i<n;i++){
		for(j=0;j<(n-i);j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp; 
			}
		}
	}
	if(n%2==0){
		printf("%.1f",((A[(n-1)/2]+A[((n-1)/2)+1])/2.0));
	}else if(n%2==1){
		printf("%d",(A[(n/2)]));
	}
}
