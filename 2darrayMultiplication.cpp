#include <stdio.h>



int main() {
    int row = 3;
    int col = 3;
    int arr1[row][col] = { {1,2,3},{1,2,3},{1,2,3,} };
    int arr2[row][col] = { {1,2,3},{1,2,3},{1,2,3,} };
    int arr3[row][col];
    
	
	
    for(int i = 0 ; i < row; i++) {
    	int count = 0;
        int sum = 0;
	    int k = 0;
    	for(int j = 0 ; j < row * col ; j++) {
    		
    	sum += arr1[i][count] * arr2[count][k];//6
		count++;//3
		
		
		if(count == col) {
		count = 0;
		k++;//4
		printf("%d ",sum);	///6
		sum  = 0 ;
			
		}	
    		
		}
	}
    



}
