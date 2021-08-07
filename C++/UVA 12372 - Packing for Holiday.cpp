#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,w,h,no=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&l,&w,&h);
        if(h<=20 && w<=20 && l<=20)
            printf("Case %d: good\n",++no);
            else
            printf("Case %d: bad\n",++no);
    }
    return 0;
}
