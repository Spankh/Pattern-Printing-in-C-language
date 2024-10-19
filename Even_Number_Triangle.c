// Even Number Triangle 
#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
          int a = 0;
        for (int j = 1; j <= i; j++) { // inner loop for col
          a = a + 2; // condition to find next even no in series a initialized by 0
            printf("%d",a);
            printf(" ");
              
        }
        printf("\n");
     
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 5
2 
2 4 
2 4 6 
2 4 6 8 
2 4 6 8 10 


=== Code Execution Successful ===
*/
