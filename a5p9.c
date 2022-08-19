//  Assignment - 5   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    More on Iterative Control Statements in C Language
//  Assignment-05_Problem-09: Write a program to print the cubes of the first N natural numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-05_Problem-09: Will Print, The Cubes Of The First N Natural Numbers On The Screen...");

    // DATA INPUT...
    int i, N;
    printf("\n\n");
    printf("Enter The Number Of Times, You Want To Print \"Cubes Of The First N Natural Numbers\", In Reverse Order, On The Screen: ");
    scanf("%d", &N);
    printf("The Number Entered By You, Is: %d", N);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, The Cubes Of The First N Natural Numbers On The Screen, Right...");
    printf("\n\n");

    for (i = 1; i <= N; i++)
    {
        printf("%d", i * i * i);
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, The Cubes Of The First N Natural Numbers On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}