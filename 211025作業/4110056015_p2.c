/*
�t�šG��u�t 1�~�� 
�Ǹ��G4110056015 
�m�W�G�\�a�� 
�p���q�l�l��Gwillyshui@gmail.com 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
    int i,j;
    int total=0;

    scanf("%d",&N);

    for (i=1;i<=N;i++)
    {
        for (j=1;j<=(N/i);j++)
        {
             if (N>(i*j))
				total++;
        }
    }
    
    printf("%d",total);

}
