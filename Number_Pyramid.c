// Number Pyramid - by using nth term formula (2*n-1)

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row

        for (int j = 1; j <= n-i; j++) { // inner loop for col to print space brfore star 
           printf("  "); // print double space due to duble digit
           
        }
        
        for(int k = 1; k <= 2*i-1; k++){ //nested loop for col to print no
         
            printf("%d",k);
               printf(" "); 
        }
        
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter no of lines: 7
            1 
          1 2 3 
        1 2 3 4 5 
      1 2 3 4 5 6 7 
    1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 8 9 10 11 
1 2 3 4 5 6 7 8 9 10 11 12 13 


=== Code Execution Successful ===
*/
