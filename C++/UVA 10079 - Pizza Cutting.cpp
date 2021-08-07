#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)>0)
    {
            if(n<0)
                break;
            printf("%lld\n",(n*(n+1)/2)+1);
    }

    return 0;
}
