/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,ln=0;
	char lc[100001],c;
	
	for(i=0;i<100000;i++){
		if(c!='\n'){
			scanf("%c",&c);
			if(c=='('||c=='{'||c=='['){
				ln++;
				lc[ln]=c;
			}else{
				if(c==')'){
					if(lc[ln]!='('){
					//	printf("No");
						break;
					}else{
						ln--;
					}
				}else if(c==']'){
					if(lc[ln]!='['){
					//	printf("No");
						break;
					}else{
						ln--;
					}
				}else if(c=='}'){
					if(lc[ln]!='{'){
					//	printf("No");
						break;
					}else{
						ln--;
					}
				}
			}
		}else{
			break;
		}
	}
	
	if(ln==0){
		printf("Yes");
	}else{
		printf("No");
	}
	
	return(0);
}
