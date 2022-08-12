//  Assignment - 5   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    Operators in C Language
//  Assignment-05_Problem-01: Write a program to print MySirG N times on the screen.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-05_Problem-01: Will Print, MySirG N Times On The Screen...");

    // DATA INPUT...
    int i, N;
    printf("\n\n");
    printf("Enter The Number Of Times, You Want To Print \"MySirG\" On The Screen: ");
    scanf("%d", &N);
    printf("The Number Entered By You, Is: %d", N);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, \"MySirG\" N Times On The Screen, Right...");
    printf("\n\n");

    for (i = 0; i < N; i++)
    {
        printf("MySirG");
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, \"MySirG\" N Times On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}