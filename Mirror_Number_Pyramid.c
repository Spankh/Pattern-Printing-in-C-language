// Mirror Number Pyramid 

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    int n_space = n-1; // No of space
    
    for (int i = 1; i <= n; i++){ //outer loop for row
     
        for (int s = 1; s <= n_space; s++) { // inner loop for col to print space brfore element
           printf("  "); // print double space due to duble digit
        }
        n_space--;
        
        for(int j = 1; j <= i; j++){ //nested loop for col to print no triangle
            printf("%d",j);
            printf(" ");
          
        }

        int a = i-1; // extra variable
         for(int k = 1; k <= i-1; k++){ //nested loop for col to print extra no
           
            printf("%d",a);
            printf(" ");
          a--;
        }
        
        printf("\n");
    }
    return 0;
}




/*
=== Code Execution Successful ===

Enter no of lines: 5
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 


=== Code Execution Successful ===
*/
