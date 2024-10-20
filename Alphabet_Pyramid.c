// Alphabet Pyramid - by using nth term formula (2*n-1)

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
       
    for (int i = 1; i <= n; i++){ //outer loop for row
     int a =1;
        for (int j = 1; j <= n-i; j++) { // inner loop for col to print space brfore star 
           printf("  "); // print double space due to duble digit
           
        }
        
        for(int k = 1; k <= 2*i-1; k++){ //nested loop for col to print 
     
         int d = a + 64;
         char ch = (char)d;
            printf("%c",ch);
               printf(" "); 
               a++;
        }
        
        printf("\n");
        
    }
    return 0;
}

/*

=== Code Execution Successful ===


Enter no of lines: 5
        A 
      A B C 
    A B C D E 
  A B C D E F G 
A B C D E F G H I 


=== Code Execution Successful ===
*/
