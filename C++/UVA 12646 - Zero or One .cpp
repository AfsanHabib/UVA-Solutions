#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Alice,Bob,Clara;
    while(scanf("%d%d%d",& Alice,&Bob,&Clara)!=EOF)
    {
        if((Alice==0 && Bob==1 && Clara==1) || (Alice==1 && Bob==0 && Clara==0))
            printf("A\n");
        else if((Bob==0 && Alice==1 && Clara==1) || (Bob==1 && Alice==0 && Clara==0))
        printf("B\n");
        else if((Clara==0 && Bob==1 && Alice==1) || (Clara==1 && Bob==0 && Alice==0))
            printf("C\n");
        else if((Alice==0 && Bob==0 && Clara==0) || (Alice==1 && Bob==1 && Clara==1))
            printf("*\n");
    }
    return 0;
}
