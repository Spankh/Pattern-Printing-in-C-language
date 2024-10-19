// Floyd's Odd Triangle
    
#include <stdio.h>

int main()
{
    int n; 
    printf("Enter No of Line: ");
    scanf(“%d”,&n); 
    int a = 1; // extra variable
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= i; j++) { // inner loop for col
        
              printf("%d",a);
              printf(" ");
              a=a+2;
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter No of Line: 5
1 
3 5 
7 9 11 
13 15 17 19 
21 23 25 27 29 


=== Code Execution Successful ===
*/
