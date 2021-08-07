#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&num1,&num2);
        if(num1<num2)
        printf("<\n");
        else if(num1>num2)
        printf(">\n");
        else if(num1=num2)
        printf("=\n");
    }
    return 0;
}

