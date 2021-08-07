#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int people,age[2000001],i;
    while (scanf("%lld",&people) !=EOF)
    {
        if (people==0)
            break;
        for (i=0; i<people; i++)
            scanf("%lld",&age[i]);
        sort(age,age+people);
        for (i=0; i<people; i++)
        {
            printf("%lld",age[i]);
            if (i+1<people)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
