#include<stdio.h>


int main() {

    int limit,arr[limit],i,num = 0;

    printf("Enter the limit\n");
    scanf("%d",&limit);//3

    for(i = 0; i < limit; i++) {

        scanf("%d",&arr[i]);//9

        num = num * 10 + arr[i];//0*10 + 9=9

    }
    num += 1;//10

     i = 0;
     while(num != 0) {

        limit = num % 10 ;//1
        arr[i] = limit ;//0,1
        num /= 10 ; //1
        i++;//1

        printf("%d",arr[i]);
     }
}
