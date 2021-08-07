#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int n,mh,mm,rh,rm;
     scanf("%d",&n);
     while(n--)
     {
         scanf("%d:%d",&mh,&mm);
         if(mh==12 && mm!=0)
         {
             rh=11;
             rm=(60-mm);
         }else if(mh==12 && mm==0)
         {
             rh=12;
             rm=0;
         }else if(mh!=12 && mm==0)
         {
             rh=12-mh;
             rm=0;
         }else if(mh!=12 && mm!=0)
         {
             rh=11-mh;
             rm=60-mm;
         }
         if(rh==0)
            rh=12;
         printf("%02d:%02d\n",rh,rm);
     }

     return 0;
}
