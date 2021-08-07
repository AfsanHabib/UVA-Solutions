#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,c=0,sum,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d\n%d",&a,&b);
        sum=0;
        if(a%2==0)
        a=a+1;
        for(i=a;i<=b;i=i+2)
            sum+=i;
        printf("Case %d: %d\n",++c,sum);
    }
    return 0;
}
