/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned long long int n,a,b,resM,resS,i,j,k;
	scanf("%llu %llu %llu",&n,&a,&b);
	
	if(a>b){
		i=a;
		j=b;
	}else{
		i=b;
		j=a;
	}	
	while(j!=0){
		k=i%j;
		i=j;
		j=k;
	}
	
	
	
	resM=n;
	resS=(n/a)+(n/b)-(n/(a*b/i))*2;
	
	i=resM;
	j=resS;
	while(j!=0){
		k=i%j;
		i=j;
		j=k;
	}
	resS/=i;
	resM/=i;
		
	printf("%llu/%llu",resS,resM);
	return (0);
} 
