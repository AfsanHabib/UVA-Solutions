#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s1,s2,s3,s4;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lld%lld%lld",&s1,&s2,&s3,&s4);
        if(s1==s2 && s2==s3 && s3==s4)
            printf("square\n");
            else if( (s1==s3 && s2==s4) || (s2==s3 && s4==s1) || (s1==s2 && s3==s4) )
            printf("rectangle\n");
        else if(s1<=s2+s3+s4 && s2<=s1+s3+s4 && s3<=s2+s1+s4 && s4<=s2+s3+s1)
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
