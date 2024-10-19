// Reverse Number Row Triangle - as per there respective row no

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    int a = n; // extra variable (where the value is initialize as value of n)
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= a; j++) { // inner loop for col
         
            printf("%d",i);
            
        }
        printf("\n");
        a--; // Decrease the value of extra variable
        
    }
    return 0;
}


=== Code Execution Successful ===


Enter no of lines: 5
11111
2222
333
44
5


=== Code Execution Successful ===
