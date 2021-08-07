#include<stdio.h>
#include<string.h>
int main()
 {
     int no=0;
     char c[14];
     while(1)
    {
        gets(c);
        if(strcmp(c,"#")==0)
            break;
        else if(strcmp(c,"HELLO")==0)
            printf("Case %d: ENGLISH\n",++no);
        else if(strcmp(c,"HOLA")==0)
            printf("Case %d: SPANISH\n",++no);
        else if(strcmp(c,"HALLO")==0)
            printf("Case %d: GERMAN\n",++no);
        else if(strcmp(c,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",++no);
        else if(strcmp(c,"CIAO")==0)
            printf("Case %d: ITALIAN\n",++no);
        else if(strcmp(c,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",++no);
            else
                printf("Case %d: UNKNOWN\n",++no);
    }
    return 0;
}
