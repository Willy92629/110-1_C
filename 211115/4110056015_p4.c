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
	int i,j,N,rep=0,cnt=0;
	scanf("%d",&N);
	int num[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<i;j++){
			if(num[i]==num[j]){
				cnt++;
			}
		}
		if(cnt!=0)
			rep++;
		cnt=0;
	}
	printf("%d",N-rep);
}

