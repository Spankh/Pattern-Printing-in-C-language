// Odd Number Triangle

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
          int a = 1;
        for (int j = 1; j <= i; j++) { // inner loop for col
          
            printf("%d",a);
             printf(" ");
              a = a + 2; // condition to find next odd no in series a initialized by 1
        }
        printf("\n");
     
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 5
1 
1 3 
1 3 5 
1 3 5 7 
1 3 5 7 9 


=== Code Execution Successful ===
*/
