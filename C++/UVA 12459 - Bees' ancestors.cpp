#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,f,temp,i;
    while(scanf("%lld",&n)==1)
    {
        if(n<=0)
            break;
          m=0;
          f=1;
          for(i=1;i<=n;i++)
          {
              temp=m+f;
              m=f;
              f=temp;
          }
          printf("%lld\n",f);
    }
    return 0;
}
