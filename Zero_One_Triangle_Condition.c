// 0 & 1 Triangle - without using extra variable

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row

        for (int j = 1; j <= i; j++) { // inner loop for col
        
         // condition (i+j = even -> print 1 else -> print 0)
        if((i+j) % 2 == 0)
           printf("1 ");
        else
           printf("0 ");
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


=== Code Execution Successful ===
*/
