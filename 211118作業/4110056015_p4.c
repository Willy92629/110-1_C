/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,input,dig=0,rep=0;
	int inp[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d",&input);
	
	for(i=0;i<10;i++){
		if(input==0)
			break;
		inp[i]=input%10;
		input/=10;
		dig++;
	}
	
	for(i=0;i<dig;i++){
		if(inp[i]==inp[dig-i-1]){
			rep++;
		}
	}
	
	if(rep==dig){
		printf("YES");
	}else{
		printf("NO");
	}
	return (0);
}
 
