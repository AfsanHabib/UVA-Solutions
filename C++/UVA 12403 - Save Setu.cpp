#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int n,temp=0,total=0;
    char c[50];
    scanf("%d",&n);
    while(n--)
    {
        scanf ("%s",c);
    if(strcmp(c,"donate")==0)
        {
            scanf ("%d", &temp);
            total+=temp;
        }
        else
            printf ("%d\n",total);
    }
    return 0;
}
