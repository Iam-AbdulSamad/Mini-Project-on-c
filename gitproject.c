#include "stdio.h"
#include "windows.h"
char player1[15];
char player2[15];
char choice1,choice2;
char c;
char box[9] = {"123456789"};
int player1_turn();
int player2_turn();
void gameboard();

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
    printf("\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[0], box[1], box[2]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[3], box[4], box[5]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c  \n", box[6], box[7], box[8]);
    printf("\t\t     |     |     \n");
}
int start()
{
    printf("ENTER PLAYER 1 NAME : ");
    fflush(stdin);
    gets(player1);
here:
    printf("ENTER YOUR CHOICE ('X' OR 'O'): ");
    fflush(stdin);
    scanf("%c", &choice1);
    if (choice1 == 'X' || choice1 == 'x' || choice1 == 'O' || choice1 == 'o')
    {

        printf("PLAYER 1 %s's CHOICE CONFIRMED - %c\n\n", player1, choice1);
        printf("ENTER PLAYER 2 NAME : ");
        fflush(stdin);
        gets(player2);
        if (choice1 == 'X' || choice1 == 'x')
        {
            choice2 ='O';
            printf("PLAYER 2 %s's CHOICE CONFIRMED - %c\n", player2,choice2);
        }
        else
        {
            choice2 ='X';
            printf("PLAYER 2 %s's CHOICE CONFIRMED - %c\n", player2,choice2);
        }
    }
    else
    {
        printf("\nWRONG CHOICE!, TRY AGAIN\n");
        goto here;
    }
    printf("\n---------------------- LET'S START ----------------------\n\n");
    gameboard();
    Sleep(3000);
    for ( int i = 8; i > 0; i--)
    {
        player1_turn();
        fflush(stdin);
        player2_turn();
    }
        
    
}

void help()
{
    char back;
    printf("THIS IS A TWO PLAYER GAME.\nYOU HAVE SELECT 'X' OR 'O' AT YOUR TURN\nIF THREE 'X' OR THREE 'O' ARE MARKED VERITCALLY, HORIZONTALLY OR DIAGONALLY AT THE END THEN THE PLAYER WINS");
    printf("\n\vPRESS ANY 'ENTER KEY' TO GO BACK...");
    getchar();
}
int player1_turn()
{
    system("cls");
    system("color 02");
    gameboard();

    int num;
    printf("%s's TURN --- YOU CHOSE %c \n", player1, choice1);
    again:
    printf(" ENTER THE NUMBER ON BOX TO MARK : ");
    scanf("%d", &num);
    if (choice1 == 'X' || choice1 == 'x')
    {

        if (num == 1)
        {
            box[0] = 'X';
            gameboard();
        }
        else if (num == 2)
        {
            box[1] = 'X';
            gameboard();
        }
        else if (num == 3)
        {
            box[2] = 'X';
            gameboard();
        }
        else if (num == 4)
        {
            box[3] = 'X';
            gameboard();
        }
        else if (num == 5)
        {
            box[4] = 'X';
            gameboard();
        }
        else if (num == 6)
        {
            box[5] = 'X';
            gameboard();
        }
        else if (num == 7)
        {
            box[6] = 'X';
            gameboard();
        }
        else if (num == 8)
        {
            box[7] = 'X';
            gameboard();
        }
        else if (num == 9)
        {
            box[8] = 'X';
            gameboard();
        }
        else
        {
            printf("WRONG INPUT, TRY AGAIN...\n");
            goto again;
        }
        
    }
    else
    {
        if (num == 1)
        {
            box[0] = 'O';
            gameboard();
        }
        else if (num == 2)
        {
            box[1] = 'O';
            gameboard();
        }
        else if (num == 3)
        {
            box[2] = 'O';
            gameboard();
        }
        else if (num == 4)
        {
            box[3] = 'O';
            gameboard();
        }
        else if (num == 5)
        {
            box[4] = 'O';
            gameboard();
        }
        else if (num == 6)
        {
            box[5] = 'O';
            gameboard();
        }
        else if (num == 7)
        {
            box[6] = 'O';
            gameboard();
        }
        else if (num == 8)
        {
            box[7] = 'O';
            gameboard();
        }
        else if (num == 9)
        {
            box[8] = 'O';
            gameboard();
        }
        else
        {
            printf("WRONG INPUT, TRY AGAIN...\n");
            goto again;
        }
    }
    Sleep(3000);
}
int player2_turn()
{
    system("cls");
    system("color 04");
    gameboard();

    int num;
    if (choice1 == 'X')
    {
        choice2 = 'O';
    }
    else if (choice1 == 'O')
    {
        choice2 = 'X';
    }
    printf("%s's TURN --- YOU CHOSE %c \n", player2, choice2);
    printf(" ENTER THE NUMBER ON BOX TO MARK : ");
    scanf("%d", &num);
    if (choice2 == 'X' || choice2 == 'x')
    {

        if (num == 1)
        {
            box[0] = 'X';
            // printf(" %c ",box[0]);
            gameboard();
        }
        else if (num == 2)
        {
            box[1] = 'X';
            gameboard();
        }
        else if (num == 3)
        {
            box[2] = 'X';
            gameboard();
        }
        else if (num == 4)
        {
            box[3] = 'X';
            gameboard();
        }
        else if (num == 5)
        {
            box[4] = 'X';
            gameboard();
        }
        else if (num == 6)
        {
            box[5] = 'X';
            gameboard();
        }
        else if (num == 7)
        {
            box[6] = 'X';
            gameboard();
        }
        else if (num == 8)
        {
            box[7] = 'X';
            gameboard();
        }
        else if (num == 9)
        {
            box[8] = 'X';
            gameboard();
        }
    }
    else
    {
        if (num == 1)
        {
            box[0] = 'O';
            gameboard();
        }
        else if (num == 2)
        {
            box[1] = 'O';
            gameboard();
        }
        else if (num == 3)
        {
            box[2] = 'O';
            gameboard();
        }
        else if (num == 4)
        {
            box[3] = 'O';
            gameboard();
        }
        else if (num == 5)
        {
            box[4] = 'O';
            gameboard();
        }
        else if (num == 6)
        {
            box[5] = 'O';
            gameboard();
        }
        else if (num == 7)
        {
            box[6] = 'O';
            gameboard();
        }
        else if (num == 8)
        {
            box[7] = 'O';
            gameboard();
        }
        else if (num == 9)
        {
            box[8] = 'O';
            gameboard();
        }
    }
    Sleep(3000);
}
int main()
{
    system("color 70");
    while (1)
    {
    HERE:
        menu();
        if (c == 'S' || c == 's')
        {
            system("cls");
            start();
            break;
        }
        else if (c == 'H' || c == 'h')
        {
            system("cls");
            help();
            getchar();
            goto HERE;
            break;
        }
        else if (c == 'Q' || c == 'q')
        {
            exit(0);
        }
    }
    return 0;
}