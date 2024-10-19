// Number Series - continue no series with 5-5 set of no in a row

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
            a++; // Increase the value of extra variable
            
        }
        printf("\n");
     
        
    }
    return 0;
}
/*
=== Code Execution Successful ===

Enter no of lines: 5
12345
678910
1112131415
1617181920
2122232425


=== Code Execution Successful ===
*/
