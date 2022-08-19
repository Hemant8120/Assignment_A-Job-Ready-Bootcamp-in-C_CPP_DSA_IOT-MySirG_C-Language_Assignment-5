//  Assignment - N   ===>    A Job Ready Bootcamp in C++, DSA and IOT - MySirG  ===>    More on Iterative Control Statements in C Language
//  Assignment-0N_Problem-02: Write a program to print the table of N.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM OPENING...
    system("cls");
    printf("This is Assignment-0N_Problem-02: Will Print, The Table Of N, On The Screen...");

    // DATA INPUT...
    int i, N;
    printf("\n\n");
    printf("Enter The Number Of Times, You Want To Print \"he Table Of N\", On The Screen: ");
    scanf("%d", &N);
    printf("The Number Entered By You, Is: %d", N);

    // DATA PROCESSING...
    printf("\n\n");
    printf("But, We Want To Print, The Table Of N, On The Screen, Right...");
    printf("\n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", N, i, i * N);
        printf("\n");
    }

    // DATA OUTPUT...
    printf("\n\n");
    printf("Hence...");
    printf("\n");
    printf("This Was The Program, To Print, The Table Of N, On The Screen");

    // FORMALITY...
    printf("\n\n");
    printf("Thanks For Using This Program...\n");
    printf("Hope We Will Meet Again...\n");
    printf("Bye...");

    // PROGRAM CLOSING...
    printf("\n\n");
    return 0;
}