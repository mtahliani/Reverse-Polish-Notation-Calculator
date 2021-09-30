#include <stdio.h>
#include "math.h"
int main() {

    do {
        float val1, val2, res;
        char operator;

        printf("Enter in your expression:");
        scanf("%f%c%f", &val1, &operator, &val2);

        switch(operator) {

            case '+':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",addition(val1, val2));
                //run the add function
                break;

            case '*':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",multiplication(val1, val2));
                //run the multiply
                break;

            case '-':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",subtraction(val1, val2));
                //run the subtract function
                break;

            case '/':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",division(val1, val2));
                //run the divide
                break;

            case '^':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",power(val1, val2));
                //run the power
                break;

            case '$':
                printf("You entered (rounded to two decimal places): ");
                printf("%2.2f", val1);
                printf(" and ");
                printf("%2.2f", val2);
                printf(" with the ");
                printf("%c", operator);
                printf(" operator.\n");
                printf("Result: ");
                printf("%2.2f",recursivePower(val1, val2));
                //run the recursivePower
                break;

            default:
                printf("Run the program again and enter in a valid expression.");
                break;


        }

            return 0;
    } while(1);

    return 0;
}
