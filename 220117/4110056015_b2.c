/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main(){
	unsigned long long int A,A1,Bhu;
	double B;
	int Ans[25]={0},a,b,i,j;
	
	scanf("%llu %lf",&A,&B);
	Bhu=(int)(B*100);
	A1=A;
	b=Bhu%10;
	for(i=0;i<3;i++){
		for(j=0;j<25;j++){
			a=A%10;
			Ans[i+j]+=(a*b);
			A/=10;
			//printf("%lld %lld \n",Ans[i+j],a);
		}
		A=A1;
		Bhu/=10;
		b=Bhu%10;
		//printf("%d %d ",Bhu,b);
	}
	
	for(j=0;j<25;j++){
		if(Ans[j]>9){
			Ans[j+1]+=Ans[j]/10;
			Ans[j]%=10;
		}
	}
	
	i=0;
	a=0;
	for(j=24;j>1;j--){
		if(Ans[j]!=0||i==1){
			printf("%d",Ans[j]);
			i=1;
		}
		if(Ans[j]==0){
			a++;
		}
	}
	if(a==23){
		printf("0");
	}
	
	return (0);
}
