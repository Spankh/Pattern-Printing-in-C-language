// Odd Number Series - continue no series with n set of no in a row

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    int a = 1; 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= n; j++) { // inner loop for col
         
            printf("%d",a);
             printf(" ");
            a = a + 2; // condition to find next odd no in series start with 1
            
        }
        printf("\n");
     
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 4
1 3 5 7 
9 11 13 15 
17 19 21 23 
25 27 29 31 


=== Code Execution Successful ===
*/
