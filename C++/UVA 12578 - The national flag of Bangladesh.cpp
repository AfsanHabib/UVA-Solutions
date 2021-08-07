#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int n;
    float l,w,r;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f",&l);
        r=l/5;
        w=(l*6)/10;
        r=PI*r*r;
        w=(l*w)-r;
        printf("%.2f %.2f\n",r,w);
    }
    return 0;
}
