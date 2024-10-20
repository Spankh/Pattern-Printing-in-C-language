// Star Pyramid - by using nth term formula (2*n-1)

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row

        for (int j = 1; j <= n-i; j++) { // inner loop for col to print space brfore star 
           printf(" "); // print space
        }
        
        for(int k = 1; k <= 2*i-1; k++){ //nested loop for col to print * by using nth term formula (2*n-1)
         
            printf("*");
              
        }
        
        printf("\n");
        
    }
    return 0;
}


/*
=== Code Execution Successful ===

Enter no of lines: 5
    *
   ***
  *****
 *******
*********


=== Code Execution Successful ===

*/
