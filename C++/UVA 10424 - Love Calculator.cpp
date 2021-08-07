#include<bits/stdc++.h>
using namespace std;
int s(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    char name1[26],name2[26];
    int i,j,k,sum1,sum2,len1,len2;
    float ans=0;
    while(gets(name1))
    {
        gets(name2);
        sum1=0,sum2=0;
        len1=strlen(name1);
        len2=strlen(name2);
        for(i=0; i<len1; i++)
        {
            if( (name1[i]>='a') &&(name1[i]<='z') )
                sum1=sum1+(name1[i]-96);
            else if ( (name1[i]>='A') &&(name1[i]<='Z') )
                sum1=sum1+(name1[i]-64);
        }

        for(i=0; i<len2; i++)
        {
            if( (name2[i]>='a') &&(name2[i]<='z') )
                sum2=sum2+(name2[i]-96);
            else if ( (name2[i]>='A') &&(name2[i]<='Z') )
                sum2=sum2+(name2[i]-64);
        }


        i=0;
        while(sum1>9)
        {
            sum1=s(sum1);
        }
        i=0;
        while(sum2>9)
        {
            sum2=s(sum2);
        }
        ans=((float)sum1/sum2)*100;
        if(ans<=100)
            printf("%.2f %c\n",ans,'%');
        else if (ans>100)
        {
            ans=((float)sum2/sum1)*100;
            printf("%.2f %c\n",ans,'%');
        }
    }
}
