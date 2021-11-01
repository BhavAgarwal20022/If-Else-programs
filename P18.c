#include <stdio.h>
 
int main(void) {
  int a,b,c,d,e,per;
 
  printf("Enter marks of first subject : ");
  scanf("%d",&a);
  printf("\nEnter marks of second subject : ");
  scanf("%d",&b);
  printf("\nEnter marks of third subject : ");
  scanf("%d",&c);
  printf("\nEnter marks of fourth subject : ");
  scanf("%d",&d);
  printf("\nEnter marks of fifth subject : ");
  scanf("%d",&e);
 
  per = (a+b+c+d+e)/5;
 
  printf("\nYou got %d %% marks and ",per);
 
  if(per>100){
    printf("Invalid marks assigned");
  }else if(per>=90 && per<=100){
    printf("Your grade is A");
  }else if(per>=80 && per<90){
    printf("Your grade is B");
  }else if(per>=70 && per<80){
    printf("Your grade is C");
  }else if(per>=60 && per<70){
    printf("Your grade is D");
  }else if(per>=40 && per<60){
    printf("Your grade is E");
  }else{
    printf("Your grade is F");
  }
 
  return 0;
}