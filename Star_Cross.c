// Star Cross 
    
#include <stdio.h>

int main()
{
    int n; 
    printf("Enter No of Rows: ");
    scanf(“%d”,&n); 
    if (n%2 != 0) // to check n value is odd or not
    {
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= n; j++) { // inner loop for col
         if(i==j || i+j==n+1) // (row_no = col_no) or (row_no + col_no = no of row(n) + 1)
         {
             printf("*"); //print star where if condition met
         }
         else
            printf(" "); // print space
            
        }
        printf("\n");
        
    }
    }
    else 
    printf("we need odd no to print cross");
    return 0;
}


/*
=== Code Execution Successful ===

Enter No of Rows: 7
*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *


=== Code Execution Successful ===
*/


/*
=== Code Execution Successful ===

Enter No of Rows: 7
*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *


=== Code Execution Successful ===
*/
