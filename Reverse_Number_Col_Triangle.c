// Reverse Number Col Triangle - as per there respective col no

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    int a = n; // extra variable (where the value is initialize as value of n)
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= a; j++) { // inner loop for col
         
            printf("%d",j);
            
        }
        printf("\n");
        a--; // Decrease the value of extra variable
        
    }
    return 0;
}

=== Code Execution Successful ===

Enter no of lines: 5
12345
1234
123
12
1


=== Code Execution Successful ===
