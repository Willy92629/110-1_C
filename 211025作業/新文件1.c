#include <stdlib.h>
#include <stdio.h>
int main()
{
    long long int i,j,n,total=0;//����lld multiple might ���� 
    
    scanf("%lld",&n);
    
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=(n/i);j++)//n/i�֫ܦh 
        {
            if(n>(i*j))
                total++;
        }
    }
    printf("%lld",total);
}
