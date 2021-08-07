#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,no=0,r,l,w,right,left;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&r);
        l=((100*r)/20);
        w=((60*r)/20);
        w=(w/2);
        left=((l*45)/100);
        right=((l*55)/100);
        printf("Case %d:\n",++no);
        printf("%d %d\n",-left,w);
        printf("%d %d\n",right,w);
        printf("%d %d\n",right,-w);
        printf("%d %d\n",-left,-w);
    }
    return 0;
}



