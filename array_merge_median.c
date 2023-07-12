#include<stdio.h>

int i;
int input_index(int index, int arr[i]) {
 
    
   for(i = 0; i < index ; i++) {
    scanf("%d",&arr[i]);
   }
}
int main() {

    int index1,index2,arr[index1],index[2],index3 = 0,array[index3];

    printf("Enter the index of 1st array\n");
    scanf("%d",&index1);
    printf("Enter the index of 2nd array\n");
    scanf("%d",&index2);
    
    input_index(index1,arr[index1]);
    input_index(index2,arr[index2]);
}