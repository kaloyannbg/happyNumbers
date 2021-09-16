#include <stdio.h>
#include <stdlib.h>

//The happy number is like 1001 , 1221, 63236 , 621126, 624466


int main()
{

    int number;

    do {

    printf("\n -- Enter 0 for program quit");

    printf("\n -- Enter your number 3-6 length: ");

    scanf("%d", &number);

    int temp = number;

    int counter = 0;

    while(temp > 0) {

        temp = temp / 10;
        counter++;

    }

    printf("\n\n -- Digits in number %d is %d\n\n", number, counter);

    temp = number;

    int numbers[counter];

    int numberOfDigits = counter;

    if(counter > 6 || counter < 3) {
        printf(" -- Wrong! Enter 3-6 length number! Try again! \n\n");
    } else {

    counter = 0;

    printf(" -- ");

    while(temp > 0) {

        numbers[counter] = temp % 10;

        printf("[%d]", temp % 10);

        temp = temp / 10;

        counter++;

    }

    printf(" -- ");

    counter = 0;


        if(numbers[0] != numbers[numberOfDigits-1]) {
            printf("\n\n -- The number is not happy\n\n");

        } else if(numberOfDigits == 3) {
            printf("\n\n -- The number is happy!\n\n");

          } else if(numberOfDigits == 4) {
            if(numbers[1] != numbers[2]) { // 0 | 1 | 2 | 3
                printf("\n\n -- The number is not happy\n\n");

            } else {
                printf("\n\n -- The number is happy!\n\n");

            }
        } else if(numberOfDigits == 5) {  // 0 | 1 | 2 | 3 | 4
            if(numbers[1] != numbers[3]) {
                printf("\n\n -- The number is not happy\n\n");
            } else {
                printf("\n\n -- The number is happy!\n\n");
            }
        } else if(numberOfDigits == 6) {

            if(numbers[1] != numbers[4] || numbers[2] != numbers[3]) { //  | 0 | 1 | 2 | 3 | 4 | 5 |
                printf("\n\n -- The number is not happy\n\n");
            } else {
                printf("\n\n -- The number is happy!\n\n");

            }

            printf("\n\n");

            }
        }
    } while( number != 0 );

    printf("\n\n\n");
    return 0;
}
