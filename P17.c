#include<stdio.h>
int main()
{
    int cp,sp;
    printf(" ENTER COST PRICE : " );
    scanf("%d", & cp);
    printf(" ENTER SELLING PRICE : " );
    scanf("%d", & sp);
    if(sp>cp)
    printf(" profit");
    else if(cp>sp)
    printf(" loss");
    else
    printf(" no profit no loss");
    return 0;
}