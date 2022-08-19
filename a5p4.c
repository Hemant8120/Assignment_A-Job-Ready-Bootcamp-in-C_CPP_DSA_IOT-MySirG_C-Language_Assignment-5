//  Assignment - 5   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    More on Iterative Control Statements in C Language
//  Assignment-05_Problem-04: Write a program to print the first N odd natural numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-05_Problem-04: Will Print, The First N Odd Natural Numbers On The Screen...");

    // DATA INPUT...
    int i, N;
    printf("\n\n");
    printf("Enter The Number Of Times, You Want To Print \"First N Odd Natural Numbers\", In Reverse Order, On The Screen: ");
    scanf("%d", &N);
    printf("The Number Entered By You, Is: %d", N);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, The First N Odd Natural Numbers On The Screen, Right...");
    printf("\n\n");

    for (i = 1; i <= N; i++)
    {
        printf("%d", 2 * i - 1);
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, The First N Odd Natural Numbers On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}