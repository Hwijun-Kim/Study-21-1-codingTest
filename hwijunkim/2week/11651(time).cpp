#include <stdio.h>
int main()
{
    int n, x[100005], y[100005], xy[100005][5], temp, i, j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2; j++)
        {
            scanf("%d",&xy[i][j]);
        }
    }
    
    for(i=1; i<=n; i++)
    {
        x[i]=xy[i][1];
        y[i]=xy[i][2];
    }
    
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(y[i]>y[j])
            {
                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
                
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
            if(y[i]==y[j])
            {
                if(x[i]>x[j])
                {
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }
        }
    }
    
    for(i=1; i<=n; i++)
    {
        printf("%d %d\n",x[i],y[i]);
    }
    return 0;
}
