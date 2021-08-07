#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,i,num,d,f=0;
    scanf("%lf",&n);
    while(n--)
    {
        scanf("%lf",&num);
        {
            d=0;
            for(i=1; i<=num; i++)
            {
                d=d+log10(i);
            }
            f=floor(d)+1;
            printf("%.0lf\n",f);
        }
    }
    return 0;
}


