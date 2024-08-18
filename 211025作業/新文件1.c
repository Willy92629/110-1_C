#include <stdlib.h>
#include <stdio.h>
int main()
{
    long long int i,j,n,total=0;//不用lld multiple might 溢值 
    
    scanf("%lld",&n);
    
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=(n/i);j++)//n/i快很多 
        {
            if(n>(i*j))
                total++;
        }
    }
    printf("%lld",total);
}
