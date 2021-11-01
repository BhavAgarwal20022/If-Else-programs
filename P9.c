# include<stdio.h>
# include<ctype.h>
int main()
{
     char x;
     scanf("%c", & x);
     if(isdigit(x))
     printf(" character is digit ");
     else if(isalpha(x))
     printf(" character is alphabet");
     else
     printf(" character is special character");
     return 0;
}