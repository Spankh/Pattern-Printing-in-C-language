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
            a = a + 2; // condition to find next odd no in series
            
        }
        printf("\n");
     
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 4
1357
9111315
17192123
25272931

=== Code Execution Successful ===
*/
