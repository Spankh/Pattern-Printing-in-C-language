// Hollow Rectangle
    
#include <stdio.h>

int main()
{
    int n; 
    printf("Enter No of Rows: ");
    scanf(“%d”,&n); 
    
    int m;
    printf("Enter No of Col: ");
    scanf("%d",&m);
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= m; j++) { // inner loop for col
         if((i == 1 || j == 1) || (i == n || j == m)){
              printf("*");
         }
         else
         printf(" ");
           
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===

Enter No of Rows: 5
Enter No of Col: 9
*********
*       *
*       *
*       *
*********


=== Code Execution Successful ===
*/
