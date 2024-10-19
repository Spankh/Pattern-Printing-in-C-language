// Star Triangle

#include <stdio.h>

int main()
{
    int n; // Number of lines
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        
        for (int j = 1; j <= i; j++) { // inner loop for col
         
            printf("* " );
            
        }
        printf("\n");
        
    }
    return 0;
}
