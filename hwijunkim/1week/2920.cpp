#include <stdio.h>
int main()
{
    int a[9];
    int i,j,cnt,cnt1;
    cnt=0;
    cnt1=0;
    for(i=1; i<=8; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=8; i++)
    {
        for(j=i+1; j<=8; j++)
        {
            if(a[i]<a[j])
            {
                cnt=1;
            }
            if(a[i]>a[j])
            {
                cnt1=1;
            }
        }
    }
    if(cnt==0 && cnt1==1)
    {
        printf("descending");
    }
    else if(cnt==1 && cnt1==0)
    {
        printf("ascending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}
