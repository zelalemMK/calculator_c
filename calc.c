/*This is a calculator program 
It takes in input from terminal and does the calulation.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char arithmetic_sign;
    int first, second;
    
    printf("What arthmithc would you like?");

    scanf("%c", &arithmetic_sign);
    printf("%c\n\n", arithmetic_sign);

    printf("First number:\t");
    scanf("%i", &first);

    printf("Second number:\t");
    scanf("%i", &second);

    const char add = '+';
    const char min = '-';
    const char multi = '*';
    const char div = '/';

    int result;
    
    switch (arithmetic_sign)
    {
    case add:
        result =  first + second;
        break;
    case min:
        result = first - second;
        break;
    case multi:
        result = first * second;
        break;
    case div:
        result = first / second;
        break;
    default:
        printf("Can only handle +-*/\n");
        break;
    }
    printf("result: %i\n", result);
    return 0;
}