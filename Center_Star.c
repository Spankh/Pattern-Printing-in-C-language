// Center Star - Print star in center else print #
    
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
         int a  = n/2 + 1; // find middle row and column
         if(j == a && i == a) // AND condition
         {
             printf("*"); //print star where if condition met
         }
         else
            printf("#"); // print #
            
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

Enter No of Rows: 5
#####
#####
##*##
#####
#####


=== Code Execution Successful ===
*/
