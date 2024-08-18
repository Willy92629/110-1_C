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
