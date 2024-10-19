// Number Alphabet Triangle

#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
    
    for (int i = 1; i <= n; i++){ //outer loop for row
        int a = 1;
        
        for (int j = 1; j <= i; j++) { // inner loop for col
            if (i%2==0){
                int d= a + 64;
                char ch = (char)d;
                printf("%c",ch );
                a++;
                
            }
            else
            printf("%d",j );
            
        }
        printf("\n");
        
    }
    return 0;
}

/*
=== Code Execution Successful ===
    
Enter no of lines: 5
1
AB
123
ABCD
12345

=== Code Execution Successful ===
*/
