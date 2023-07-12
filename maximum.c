#include<stdio.h>

int maximum(int,int,int);

int main() {

    int num1,num2,num3;

    printf("Enter three numbers\n");
    scanf("%d%d  %d",&num1,&num2,&num3);

  printf("%d is the greatest number\n",maximum(num1,num2,num3));
  printf("%d is the greatest number\n",maximum(num2,num1,num3));
 // printf("%d is the greatest number\n",maximum(num3,num2,num1));

}

int maximum(int numm1,int numm2,int numm3) {

   int max;
   if(numm1>numm2 && numm1>numm3){
    return max = numm1;
   }

    
}