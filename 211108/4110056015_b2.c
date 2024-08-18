/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a='A';
	int num,resS,resM=1;
	int i,k,neg;
	
	scanf("%d",&resS);
	
	while(1){
		scanf("%c",&a);
		if(a=='=')
			break;
		scanf("%d",&num);
		switch(a){
			case '+':
				resS+=(num*resM);
				break;
			case '-':
				resS-=(num*resM);
				break;
			case '*':
				resS*=num;
				break;
			case '/':
				resM*=num;
				break;
		}
	}
	if(resS<0){
		neg++;
		resS= -resS;
	}
	if(resM<0){
		neg++;
		resM= -resM;
	}
	if(resS!=0){
	if(resM>=resS){
		for(i=1;i<=resS;i++){
			if(resS%i==0 && resM%i==0){
				k=i;
			}
		}
		resS/=k;
		resM/=k;
	}else{
		for(i=1;i<=resM;i++){
			if(resS%i==0 && resM%i==0){
				k=i;
			}
		}
		resS/=k;
		resM/=k;
	}
	}else{
		resM=1;
	}
	if(neg==1){
		resS=-resS;
	}
	
	if(resM==1)
		printf("%d",resS);
	else
		printf("%d/%d",resS,resM);
	
	return 0;
}
