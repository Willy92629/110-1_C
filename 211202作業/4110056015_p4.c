/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <math.h>

int main()
{
	unsigned long long int i,j,k,c=0,N;
	scanf("%llu",&N);
	for(i=2;i<=sqrt(N);i++){
    	for(j=i;j<=N/i;j*=i){
			if(j<=N/i){
			c++;
    		}
   		}
	}
	
	if(c==0){
		printf("%d",c);
	}else{
		i=N*(N-1);
		j=c;
		while(j!=0){
			k=i%j;
			i=j;
			j=k;
		}
		printf("%llu/%llu",c/i,N*(N-1)/i);
	}
	return 0;
}
