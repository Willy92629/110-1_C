/*
* �t�šG��u�@ 
* �Ǹ��G4110056015 
* �m�W�G�\�a�� 
* �p���q�l�l��Gwillyshui@gmail.com
*/
#include <stdio.h>

int main()
{
  unsigned long long st[65];
  int N,i;
  scanf("%d",&N);
  st[0]=st[1]=1;
  for(i=2;i<65;i++){
  	st[i]=st[i-1]+st[i-2];
  }
  printf("%llu",st[N]);
  return 0;
}
