# include<stdio.h>
# include<ctype.h>
int main()
{
     int x;
     printf("ENTER ANY CHARACTER : ");
     scanf("%d", & x);
     if(isalpha(x))
     printf("Character is alphabet");
     else
     printf(" Character is not a alphabet");
     return 0;
}