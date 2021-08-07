#include<stdio.h>
int main()
{
    int s1,s2,s3,n,no=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&s1,&s2,&s3);
        if(s2>s1 && s1>s3 || s3>s1 && s1>s2)
            printf("Case %d: %d\n",++no,s1);
        if(s1>s2 && s2>s3 || s3>s2 && s2>s1)
            printf("Case %d: %d\n",++no,s2);
        if(s1>s3 && s3>s2 || s2>s3 && s3>s1)
            printf("Case %d: %d\n",++no,s3);
    }
    return 0;
}
