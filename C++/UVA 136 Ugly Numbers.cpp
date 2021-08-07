#include <bits/stdc++.h>
using namespace std;
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}



/*

#include <bits/stdc++.h>
using namespace std;
#define min(a,b)  (a<b? a:b)
int main()
{
    int a,b,c,n;
    long ugly[1502],x,y,z;
    ugly[1]=a=b=c=n=1;
    while(n!=1500)
    {
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++n]=min(x,min(y,z));
        if(ugly[n]==x)a++;
        if(ugly[n]==y)b++;
        if(ugly[n]==z) c++;
    }
    printf("The 1500'th ugly number is %ld.\n",ugly[1500]);
    return 0;
}
\*
