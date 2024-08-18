/*
系級：資工系 1年級 
學號：4110056015 
姓名：許家紳 
聯絡電子郵件：willyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float X;
	int N;
	int i;
	float R=1.0;
	
	scanf("%f %d",&X,&N);
	
	if(N>=1)
	{
		for(i=1;i<=N;i++)
			R=R*X;
	}
	else if(N==0)
		R=R;
	else if(N<=-1)
	{ 
		N=-N;
		for(i=1;i<=N;i++)
			R=R/X;
	}
	
	printf("%.4f",R);
} 
