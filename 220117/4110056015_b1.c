/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
 
int main(){
	unsigned long long int N,com=0;
	scanf("%llu",&N);
	if(N<1000){
		com=0;
	}
	if(N>1000){
		com+=(N-999);
	}
	if(N>1000000){
		com+=(N-999999);
	}
	if(N>1000000000){
		com+=(N-999999999);
	}
	if(N>1000000000000){
		com+=(N-999999999999);
	}
	if(N>1000000000000000){
		com+=(N-999999999999999);
	}
	printf("%llu",com);
	
	return (0);
}
