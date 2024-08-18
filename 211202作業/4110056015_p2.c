/*
* 系級：資工一 
* 學號：4110056015 
* 姓名：許家紳 
* 聯絡電子郵件：willyshui@gmail.com
*/
#include <stdio.h>

int main()
{
  int i,j,m=0,k=0,N=0,pr=0;
  char c[305];
  char p[305];
  char a[10]={'A','E','I','O','U','a','e','i','o','u'};
 
  for(i=0;i<305;i++){
    scanf("%c",&c[i]);
    N++;
    if(c[i]=='\n'){
      break;
    }
    for(j=0;j<10;j++){
      if(c[i]==a[j]){
        p[k]=c[i];
        k++;
        break;
      }
    }
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<10;j++){
      if(c[i]==a[j]){
      	k--;
        printf("%c",p[k]);
        pr=1;
        break;
      }
    }
    if(pr==0){
      printf("%c",c[i]);
    }else{
      pr=0;
    }
  }
  return 0;
}
