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
	int n,i;
	char c;
	//scanf("%c",c);
	
	while(1){
		scanf("%c",&c);
		if(c!='\n'){
			scanf("%d",&n);
		}else{
			break;
		}
		for(i=1;i<=n;i++){
			printf("%c",c);
		}
	}
	
	return 0;
}
