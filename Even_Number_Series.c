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
            
        }
        printf("\n");
     
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 5
246810
1214161820
2224262830
3234363840
4244464850

=== Code Execution Successful ===
*/
