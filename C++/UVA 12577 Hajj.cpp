#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char c[10];
    int n=0;
    while(scanf("%s",c))
    {
        if(!strcmp(c,"*"))
        break;
        else if(!strcmp(c,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",++n);
        else
        printf("Case %d: Hajj-e-Asghar\n",++n);
    }
    return 0;
}
