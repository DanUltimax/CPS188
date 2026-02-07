#include <stdio.h>
#include <stdlib.h> //for rand()
#include <time.h>

int main() {

    srand(time(0));
    int rank = rand() % 14 + 1; //modulus ensures that the number is always between 1 and 14. (+1 for the offset)

    /*EVALUATING HIGH-RANK CARDS*/
    char high_rank;

    switch (rank)
    {
    case (11): //checks if the card is between 11-14 and replaces the rank with the high card rank
        high_rank = 'J';
        printf("%c", high_rank);
        break;

    case (12):
        high_rank = 'Q';
        printf("%c", high_rank);
        break;
    
    case (13):
        high_rank = 'K';
        printf("%c", high_rank);
        break;

    case (14):
        high_rank = 'A';
        printf("%c", high_rank);
        break;

    default:
        printf("%d", rank); //first part of the final print statement
        break;
    }
    /*====================*/

    /*SUIT EVALUATION*/
    int suit_index = rand() % 4 + 1; //to make it random, its easier to just set it to an integer value and print based on an index

    switch (suit_index)
    {
    case (1):
        printf("\u2665"); //second part of the final print statement
        break;

    case (2):
        printf("\u2666");
        break;
    
    case (3):
        printf("\u2663");
        break;

    case (4):
        printf("\u2660");
    }
    return 0;
}