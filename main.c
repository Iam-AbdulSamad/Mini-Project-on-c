#include "stdio.h"
#include "windows.h"
char player1[15];
char player2[15];
char choice_1;
char choice_2;
char c;

void menu()
{
    system("cls");
    printf("\t\t\tX - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O\n");
    printf("\t\t\t|                                                                           |\n");
    printf("\t\t\tO       X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O       X\n");
    printf("\t\t\t|       |                                                           |       |\n");
    printf("\t\t\tX       O                WELCOME TO TIC - TAC - TOE                 O       O\n");
    printf("\t\t\t|       |                                                           |       |\n");
    printf("\t\t\tO       X                                                           O       X\n");
    printf("\t\t\t|       |               ENTER \" S \" TO START THE GAME               |       |\n");
    printf("\t\t\tX       O                                                           X       O\n");
    printf("\t\t\t|       |               ENTER \" H \" GET HELP                        |       |\n");
    printf("\t\t\tO       X                                                           O       X\n");
    printf("\t\t\t|       |               ENTER \" Q \" QUIT THE GAME                   |       |\n");
    printf("\t\t\tX       O                                                           X       O\n");
    printf("\t\t\t|       |                                                           |       |\n");
    printf("\t\t\tO       X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O       X\n");
    printf("\t\t\t|                                                                           |\n");
    printf("\t\t\tX - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O - X - O\n\n");
    printf("ENTER THE OPTION : ");
    c=toupper(fgetc(stdin));
    fflush(stdin);
}
void gameboard()
{
    char box[10][5] = {"  ", "  ", " ", "  ", "  ", " ", "  ", "  ", " "};
    printf("\t\t     |     |     \n");
    printf("\t\t  %s |  %s |  %s  \n", box[0], box[1], box[2]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %s |  %s |  %s  \n", box[3], box[4], box[5]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %s |  %s |  %s  \n", box[6], box[7], box[8]);
    printf("\t\t     |     |     \n");
}
int start()
{
    printf("ENTER PLAYER 1 NAME :");
    fflush(stdin);
    gets(player1);
    // here:
    while(1){
    printf("ENTER YOUR CHOICE ('X' OR 'O'): ");
    choice_1=toupper(fgetc(stdin));
    fflush(stdin);
    if (choice_1 == 'X' || choice_1 == 'O')
    {
        printf("PLAYER 1 %s's CHOICE CONFIRMED - %c\n", player1, choice_1);
        printf("ENTER PLAYER 2 NAME :");
        fflush(stdin);
        gets(player2);
        if (choice_1 == 'X' || choice_1 == 'x')
        {
            choice_2 = 'O' ;
            printf("PLAYER 2 %s's CHOICE CONFIRMED - %c\n", player2, choice_2);
        }
        else
        {
            choice_1 = 'X';
            printf("PLAYER 2 %s's CHOICE CONFIRMED - %c\n", player2, choice_2);
        }
        break;
    }
    else
    {
        printf("\nWRONG CHOICE!, TRY AGAIN\n");
    }
    }
    return 0;
}

void help()
{
    printf("\t\tWELCOME TO TIC -TAC-TOE GAME");
}
int main()
{
    menu();
    if ( c == 'S' )
    {
        system("cls");
        start();
    }
    else if ( c == 'H' )
    {
        help();
    }
    else if ( c == 'Q' )
    {
        exit(0);
    }
    printf("player-1 choice: %c",choice_1);
    printf("player-2 choice: %c",choice_2);
    // gameboard();

    return 0;
}