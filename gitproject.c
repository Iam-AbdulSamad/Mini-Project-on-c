#include "stdio.h"
#include "windows.h"
char player1[15];
char player2[15];
char choice;
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
    scanf("%c", &c);
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
here:
    printf("ENTER YOUR CHOICE ('X' OR 'O'): ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'X' || choice == 'x' || choice == 'O' || choice == 'o')
    {

        printf("PLAYER 1 %s's CHOICE CONFIRMED - %c\n", player1, choice);
        printf("ENTER PLAYER 2 NAME :");
        fflush(stdin);
        gets(player2);
        if (choice == 'X' || choice == 'x')
        {
            printf("PLAYER 2 %s's CHOICE CONFIRMED - O\n", player2);
        }
        else
        {
            printf("PLAYER 2 %s's CHOICE CONFIRMED - X\n", player2);
        }
    }
    else
    {
        printf("\nWRONG CHOICE!, TRY AGAIN\n");
        goto here;
    }
}

void help()
{
}
int main()
{
    menu();
    if (c == 'S' || c == 's')
    {
        system("cls");
        start();
    }
    else if (c == 'H' || c == 'h')
    {
        // help();
    }
    else if (c == 'Q' || c == 'q')
    {
        exit(0);
    }
    gameboard();

    return 0;
}