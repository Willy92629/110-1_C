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
	int A;
	int a,b,c;
	int s,m,l;
	int Min;
	
	scanf("%d",&A);
	
	a=A/100;
	b=A/10-a*10;
	c=A%10;
	
	if(a>=b){
		s=b;
		m=a;	
	}else{
		s=a;
		m=b;
	}
	
	if(c>=m){
		l=c;
	}else{
		l=m;
		if(c>s)
			m=c;
		else{
		m=s;
		s=c;
		}
	}
	
	if(s==0&&m==0){
		s=l;
		l=0;
	}else if(s==0){
		s=m;
		m=0;
	}
	 
	printf("%d%d%d",s,m,l);
}
