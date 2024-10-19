// Alphabet Triangle - by using its ASCII value
#include <stdio.h>

int main()
{
    int n; // Number of lines
    printf("Enter no of lines: ");
    scanf(“%d”, &n); 
   
    for (int i = 1; i <= n; i++){ //outer loop for row
          int a = 1;
        for (int j = 1; j <= i; j++) { // inner loop for col
         int d = a + 64; // condition to find 'A' ASCII value is 65 and 'a' ASCII value is 97
          char ch = (char) d;
            printf("%c",ch);
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
AB
ABC
ABCD
ABCDE


=== Code Execution Successful ===
*/
