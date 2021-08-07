#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{
    int n1,n2,i,ans,s;
    while (scanf("%d %d", &n1, &n2)==2)
    {

        if(n1+n2==0)
            break;
        ans=0;
        for(i=n1;i<=n2;i++)
        {
            s=sqrt(i);
            if(s*s==i)
            ans++;
        }
            printf("%d\n",ans);
    }
    return 0;
}
