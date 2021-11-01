 # include<stdio.h>
 int main()
 {
     int bs,hra,da,grossSalary;
     printf("ENTER BASIC SALARY OF AN EMPLOYEE  : ");
     scanf("%d", & bs);
     
     if(bs<=10000)
     {
     hra=0.20*bs;
     da=0.80*bs;
     }
     else if(bs<=20000)
     {
     hra=0.25*bs;
     da=0.90*bs;
     }
     
     else if (bs>20000)
     {
     hra=0.30*bs;
     da=0.95*bs;
     }
     grossSalary=bs+da+hra;
     printf("GROSS SALARY OF THE EMPLOYEE IS  : ");
     printf("%d", grossSalary);
     return 0;
 }


