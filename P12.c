# include<stdio.h>
int main()
{
    int x;
    printf(" INPUT MONTH NUMBER--->>");
    scanf("%d", & x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
    printf(" NO. OF DAYS IS 31");
    else if(x==2)
    printf(" NO. OF DAYS IS 29 ");
    else
    printf(" NO. OF DAYS IS 30");
    return 0;
}