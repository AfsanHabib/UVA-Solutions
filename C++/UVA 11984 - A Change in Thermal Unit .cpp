#include<bits/stdc++.h>
using namespace std;
int main()
{
    double c,f,temp,inctemp;
    int n,no=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf",&c,&inctemp);
        f=9*c/5+inctemp;
        temp=f*5/9;
        printf("Case %d: %.2lf\n",++no,temp);
    }
    return 0;
}
