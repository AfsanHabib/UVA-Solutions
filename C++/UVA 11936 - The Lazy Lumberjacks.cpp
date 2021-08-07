#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,s,t,n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&f,&s,&t);
        if(f+s>t && s+t>f && f+t>s)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
