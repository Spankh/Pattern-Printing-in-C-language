// Even Number Series - continue no series with n set of no in a row

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    int a = 0;
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= n; j++) { // inner loop for col
            a = a + 2; // condition to find next even no in series start with 0
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
2 4 6 8 10 
12 14 16 18 20 
22 24 26 28 30 
32 34 36 38 40 
42 44 46 48 50 


=== Code Execution Successful ===
*/
