//bubble_sort 2 array
#include <stdio.h>

void bubble_sort(int num[], int size){
	
	int i, j, temp, flag = 1;
	
	for(i=0; i<(size-1) && flag; i++){
		
		flag = 0;
		for(j=0; j<(size-1-i); j++){
			
			if(num[j] > num[j+1]){
				temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
				flag = 1;
			}
		}
	}
	
}

void read_array(int a[], int len){
	
	int i;
	for(i=0; i<len; i++){
		scanf("%d", &a[i]);
	}
	
}

int main(void){
	
	int num1[100] = {0};
	int num2[100] = {0};
	int num[200] = {0};
	int len1, len2, len;
	int i, j = 0, flag, index, sum;
	
	scanf("%d", &len1);
	read_array(num1, len1);
	scanf("%d", &len2);
	read_array(num2, len2);
	
	len = len1 + len2;
	for(i=0; i<len1; i++){
		num[j] = num1[i];
		j++;
	}
	for(i=0; i<len2; i++){
		num[j] = num2[i];
		j++;
	}
	
	bubble_sort(num, len);
	
	flag = len%2;
	index = len/2;
	if(flag){
		printf("%d\n", num[index]);
	}
	else{
		sum = num[index-1] + num[index];
		if(sum%2){
			printf("%.1lf\n", (double)sum / 2 );
		}
		else{
			printf("%d\n", sum/2);
		}
	}
	
	return 0;
} 
