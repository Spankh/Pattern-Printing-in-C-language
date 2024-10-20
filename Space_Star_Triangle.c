// Space Star Triangle 

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
        
        for(int k = 1; k <= i; k++){ //nested loop for col to print *
            printf("*");
        }
        
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 4
   *
  **
 ***
****


=== Code Execution Successful ===
*/
