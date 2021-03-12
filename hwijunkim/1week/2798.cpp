#include <stdio.h>
int main()
{
    int n,m,i,j,k;
    int card[6],sum;
    sum=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&card[i]);
    }
    for(i=1;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                if(sum<card[i]+card[j]+card[k] && card[i]+card[j]+card[k]<=m)
                {
                    sum=card[i]+card[j]+card[k];
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}
