// Star Square - where no of row & col are same

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”,&n); // input no of lines
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= n; j++) { // inner loop for col
         
            printf("* " );
            
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 4
* * * * 
* * * * 
* * * * 
* * * * 


=== Code Execution Successful ===
*/
