# include<stdio.h>
int main()
{
     int x;
     scanf("%d", & x);
     if(x%5==0 && x%11==0)
     printf(" NO. IS DIVISIBLE BY BOTH 5 AND 11");
     else
     printf(" NO. IS NEITHER DIVISIBLE BY 5 NOR IS DIVISIBLE BY 11");
     return 0;
}
