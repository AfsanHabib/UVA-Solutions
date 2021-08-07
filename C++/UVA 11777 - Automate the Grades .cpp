#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1,t2,f,c1,c2,ct,c3,a,no=0,grade,total;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        if(c1<=c2 && c1<=c3)
            ct=(c2+c3)/2;
        else if(c2<=c1 && c2<=c3)
            ct=(c1+c3)/2;
        else if(c3<=c1 && c3<=c2)
            ct=(c1+c2)/2;
            {
                total=t1+t2+f+a+ct;
            }

        if(total>=90)
            printf("Case %d: A\n",++no);
        else if(total>=80)
            printf("Case %d: B\n",++no);
        else if(total>=70)
            printf("Case %d: C\n",++no);
        else if(total>=60)
            printf("Case %d: D\n",++no);
        else if(total<60)
            printf("Case %d: F\n",++no);
    }
    return 0;
}


