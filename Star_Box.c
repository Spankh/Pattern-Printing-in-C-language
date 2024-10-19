// Star Box - where no of row & col are different

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
         
            printf("* " );
            
        }
        printf("\n");
        
    }
    return 0;
}

