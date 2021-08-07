#include<stdio.h>
int main()
{
    int n,g,l;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&g,&l);
        if(l%g!=0)
            printf("-1\n");
        else
            printf("%d %d\n",g,l);
    }
    return 0;
}
