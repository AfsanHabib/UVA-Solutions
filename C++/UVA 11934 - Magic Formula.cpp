#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,l,i,fun,ans;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&x,&l)==5)
    {
        if(a==0 && b==0 && c==0 && x==0& l==0)
            break;
            ans=0;
            for(i=0;i<=l;i++)
            {
                fun= (a*i*i) + (b*i) + c;
                if(fun%x==0)
                    ans++;
            }
        printf("%d\n",ans);
    }
    return 0;
}
