/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
void bubble(int a[]);
int dig=0; 

int main(){
	int num,i;
	scanf("%d",&num);
	i=num;
	while(1){
		if(i==0){
			break;
		}
		i/=10;
		dig++;
	}
	int a[dig];
	for(i=0;i<dig;i++){
		a[i]=num%10;
		num/=10;
	}
	
	bubble(a);
	
	for(i=0;i<dig;i++){
		printf("%d",a[i]);
	}
	
}

void bubble(int a[])
{
	int i,j,temp;
	for(i=1;i<dig;i++){
		for(j=0;j<(dig-i);j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
