# include<stdio.h>
int main()
{
    int x,y,z;
    
    scanf("%d", & x);
    scanf("%d", & x);
    scanf("%d", & z);
    if((x+y>z) &&(y+z>x) && (x+z>y))
    printf(" TRIANGLE IS VALID");
    else
    printf(" TRIANGLE IS NOT VALID");
    return 0;
} 