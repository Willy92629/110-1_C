/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,next=1,res=0;
	scanf("%d",&n);
	int A[101];
	int Cnt[101];
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	while(1){
		res+=A[next];
		next=A[next];
		if(next==1)
			break;
	}
	printf("%d",res);
}
