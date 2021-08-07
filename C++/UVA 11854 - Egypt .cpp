#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,s,t;
    {
        while(scanf("%d%d%d",&f,&s,&t)==3)
            if(f==0 && s==0 && t==0)
            break;
            else if(f*f==s*s+t*t)
                printf("right\n");
                else if (s*s==f*f+t*t)
                printf("right\n");
                else if(t*t==s*s+f*f)
                printf("right\n");
                else
                    printf("wrong\n");
    }
    return 0;
}
