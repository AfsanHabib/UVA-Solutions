#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,i;
    while(scanf("%lld",&num)&& num != 0)
    {
        if(num<0)
        {
            printf("%lld = -1 x ",num);
            num=abs(num);
        }
        else
        {
            printf("%lld = ",num);
        }
        for(i=2; i*i<=num; i++)
        {
            if(num%i==0)
            {
                printf("%lld x ",i);
                num=num/i;
                i=1;
            }
        }
        printf("%lld\n",num);
    }
    return 0;
}
