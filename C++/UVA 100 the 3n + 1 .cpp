#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,temp,L,c,ans,j;
    while(scanf("%d %d",&n1,&n2)==2)
    {
        ans=0;
        printf("%d %d ",n1,n2);
        if(n1>n2)
        {
            temp=n2;
            n2=n1;
            n1=temp;
        }
        for(i=n1; i<=n2; i++)
        {
            L=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                L++;
            }
            if(L>=ans)
                ans=L;
        }
        printf("%d\n",ans);
    }
    return 0;
}
