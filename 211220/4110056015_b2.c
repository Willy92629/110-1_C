/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
unsigned long long int fac(int);

int main(){
	int i,j,A[200001],N,temp;
	unsigned long long int Cmpl[200]={0},all=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		temp=A[i]%200;
		if(temp<0){
			Cmpl[200+temp]++;
		}else{
			Cmpl[temp]++;
		}
	}
	for(i=0;i<200;i++){
		//printf("%d ",Cmpl[i]);
		if(Cmpl[i]>=2){
			all+=(Cmpl[i])*(Cmpl[i]-1)/2;
		}
	}
	
	printf("%lld",all);
		
	return(0);
}
/*
unsigned long long int fac(int a){
	unsigned long long int i,res=1;
	for(i=1;i<=a;i++){
		res*=i;
	}
	return (res);
}*/
