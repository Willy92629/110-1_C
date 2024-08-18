//Palindrome Detection

#include <stdio.h>

int main(){
	
	int size = 0, head, tail, flag = 1;
	char input[21], c;
	
	scanf("%c", &c);
	while(c!='\n'){
		size++;
		input[size] = c;
		scanf("%c", &c);
	}
	
	head = 1;
	tail = size;
	
	while(head < tail){
		if(input[head] != input[tail]){
			flag = 0;
			break;
		}
		else{
			head++;
			tail--;
		}
	}
	
	if(flag){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	
	return 0;
}
