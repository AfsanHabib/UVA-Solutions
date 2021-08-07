#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a<0 && b<0)
            break;
        else if(a>b)
            ans=a-b;
            else if(a<b)
            ans=b-a;
            else if(ans>50)
                ans=100-ans;
            printf("%d\n",ans);
    }
    return 0;
}

