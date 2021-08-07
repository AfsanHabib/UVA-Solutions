#include<stdio.h>
int main()
{
long b,p;
while(scanf("%ld",&b)==1)
{
if(b==0) break;
long  x=0,y=1,p=0;
int i;
for(i=1;i<=b;i++)
{
p=x+y;
x=y;
y=p;
}
printf("%ld\n",p);
}
return 0;
}
