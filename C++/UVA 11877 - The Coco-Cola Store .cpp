#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,full;
    while (scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            full=0;
        while(n>=3){
            n=n-3;
        full++;
        n=n+1;
        }
    if(n==2)
        printf("%d\n",full+1);
    else
        printf("%d\n",full);
    }
    return 0;
}
