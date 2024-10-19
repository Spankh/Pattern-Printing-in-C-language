// Number Pattern - triangle with there respective row no

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= i; j++) { // inner loop for col
         
            printf("%d", i);
            
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 5
1
22
333
4444
55555

=== Code Execution Successful ===
*/
