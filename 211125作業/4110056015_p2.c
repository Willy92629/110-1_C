/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i,j,rep=0,cr=1,ocr;
	scanf("%d",&num);
	int s[10];
	
	if(num==1){
		cr=0;
	}else{
		for(i=1;i<=(6-num);i++){
			cr*=num;
		}
	}
	
	ocr=cr;
	
	for(s[1]=1;s[1]<=num;s[1]++){
		for(s[2]=1;s[2]<=num;s[2]++){
			for(s[3]=1;s[3]<=num;s[3]++){
				for(s[4]=1;s[4]<=num;s[4]++){
					for(s[5]=1;s[5]<=num;s[5]++){
						for(s[6]=1;s[6]<=num;s[6]++){
							
							for(i=1;i<=num;i++){
								for(j=1;j<i;j++){
									if(s[i]==s[j]){
										rep++;
									}
								}
							}
							if(cr==0){
								if(rep==0||num==1){
									for(i=1;i<=num;i++){
										printf("%d ",s[i]);
									}
									printf("\n");
								}
								cr=ocr;
							}
							cr--;
							rep=0;
						}
					}
				} 
			}
		}
	}
}
