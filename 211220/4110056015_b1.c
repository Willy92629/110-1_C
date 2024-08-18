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
	int i,co[10]={0},mst=0,myb=0,pwdC;
	char temp;
	for(i=0;i<10;i++){
		scanf("%c",&temp);
		switch (temp){
			case 'o':
				co[i]=1;
				mst++;
				break;
			case 'x':
				co[i]=0;
				break;
			case '?':
				co[i]=-1;
				myb++;
				break;
		}
	}
	if(mst==4){
		pwdC=4*3*2*1;
	}else if(mst==3){
		pwdC=3*2*1;
		pwdC*=(myb)*4+(mst*2);	
	}else if(mst==2){
		pwdC=12;
		pwdC+=6*myb*4;
		pwdC+=2*myb*(myb-1)*(2*3)+2*myb*(3*2);
	}else if(mst==1){
		pwdC=4;
		pwdC*=myb*myb*myb*2+1;
	}else if(mst==0){
		pwdC=(myb*myb*myb*myb);
	}else{
		pwdC=0;
	}
	
	printf("%d",pwdC);
	
	
	return(0);
}
