#include <stdio.h>
int main()
{
    int n,i,j,temp,a[15],cnt;
    cnt=1;
    scanf("%d",&n);
    
    while(n!=0)
    {
        a[cnt]=n%10;
        n=n/10;
        cnt++;
    }

    for(i=1; i<cnt; i++)
    {
        for(j=i+1; j<cnt; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=1; i<cnt; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}