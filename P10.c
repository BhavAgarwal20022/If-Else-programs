# include<stdio.h>
# include<ctype.h>
int main()
{
     char x;
     printf("ENTER ANY CHARACTER : ");
     scanf("%c", & x);
     if(isupper(x))
     printf(" uppercase character");
     else
     printf(" lowercase character ");
     return 0;
}