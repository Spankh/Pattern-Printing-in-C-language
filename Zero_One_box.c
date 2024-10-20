// 0 & 1 box

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    int a;
    
    for (int i = 1; i <= n; i++){ //outer loop for row
    
    //condition to change the start value of a becuse in odd row it will start with 1
     if(i%2 != 0)
     a = 1;
     else
     a=0;
        for (int j = 1; j <= n; j++) { // inner loop for col
        printf("%d", a);
        
        // condition to change the a value in inner loop
        if(a==0)
        a=1;
        else
        a=0;
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===


Enter no of lines: 5
10101
01010
10101
01010
10101


=== Code Execution Successful ===

*/
