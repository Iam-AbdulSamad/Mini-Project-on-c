#include "stdio.h"
#include "windows.h"
char player1[15];
char player2[15];
char choice1, choice2;
char c;
char OPTION_1, OPTION_2;
char box[11] = {"123456789"};
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
    c = toupper(fgetc(stdin));
    fflush(stdin);
}
void gameboard()
{
    printf("\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[0], box[1], box[2]);
    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[3], box[4], box[5]);
    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[6], box[7], box[8]);
    printf("\t\t\t     |     |     \n");
}
int start()
{
    printf("\tENTER PLAYER 1 NAME : ");
    fflush(stdin);
    gets(player1);
    printf("\tENTER YOUR CHOICE ('X' OR 'O'): ");
    choice1 = toupper(fgetc(stdin));
    fflush(stdin);
    OPTION_1 = choice1;
    while (1)
    {
        if (choice1 == 'X' || choice1 == 'O')
        {
            printf("\n\t\tPLAYER 1 %s's CHOICE CONFIRMED --> \"%c\"\n\n", player1, choice1);
            Sleep(1500);
            printf("\tENTER PLAYER 2 NAME : ");
            fflush(stdin);
            gets(player2);
            if (choice1 == 'X')
            {
                choice2 = 'O';
                OPTION_2 = choice2;
                printf("\n\t\tPLAYER 2 %s's CHOICE CONFIRMED --> \"%c\"\n", player2, choice2);
            }
            else
            {
                choice2 = 'X';
                OPTION_2 = choice2;
                printf("\n\t\tPLAYER 2 %s's CHOICE CONFIRMED --> \"%c\"\n", player2, choice2);
            }
            break;
        }
        else
        {
            printf("\nWRONG CHOICE!, TRY AGAIN\n");
        }
    }
    Sleep(3000);
    system("cls");
    printf("\n\n\t\t\t\t\t---------------------- LET'S START ----------------------\n\n");
    Sleep(900);
    gameboard();
    gamers_turn();

    return 0;
}

void help()
{
    // char back;
    //     printf("THIS IS A TWO PLAYER GAME.\nYOU HAVE SELECT 'X' OR 'O' AT YOUR TURN\nIF THREE 'X' OR THREE 'O' ARE MARKED VERITCALLY, HORIZONTALLY OR DIAGONALLY AT THE END THEN THE PLAYER WINS");
    //     printf("\n\vPRESS ANY 'ENTER KEY' TO GO BACK...");
    //     back = getch();
    //     if( back == '13' ){
    //         menu();
    //     }
    //     else{
    //         printf("\n\n\t\tENTER THE ENTER KEY....");
    //         Sleep(500);
    //         system("cls");
    //         help();
    //     }
}
int gamers_turn()
{
    char temp;
    temp = OPTION_1;
    int num;
    int i = 0;
    if (temp || temp)
    {
        while (i < 2)
        {
            if (i == 0)
            {
                printf("\n\t\t%s's TURN ---\n\t\t%s choice - '%c'\n\n", player1, player1, choice1);
                printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                scanf("%d", &num);
                i++;
            }
            else
            {
                printf("\n\t\t%s's TURN ---\n\t\t%s choice - '%c'\n\n", player2, player2, choice2);
                printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                scanf("%d", &num);
                i--;
            }

            if (num == 1)
            {
                box[0] = temp;
                gameboard();
            }
            else if (num == 2)
            {
                box[1] = temp;
                gameboard();
            }
            else if (num == 3)
            {
                box[2] = temp;
                gameboard();
            }
            else if (num == 4)
            {
                box[3] = temp;
                gameboard();
            }
            else if (num == 5)
            {
                box[4] = temp;
                gameboard();
            }
            else if (num == 6)
            {
                box[5] = temp;
                gameboard();
            }
            else if (num == 7)
            {
                box[6] = temp;
                gameboard();
            }
            else if (num == 8)
            {
                box[7] = temp;
                gameboard();
            }
            else if (num == 9)
            {
                box[8] = temp;
                gameboard();
            }
            else
            {
                printf("TURNED SKIPPED (INCORRECT CHOICE)\n");
            }
            Sleep(1500);
            OPTION_1 = OPTION_2;
            OPTION_2 = temp;
            temp = OPTION_1;
        }
    }
}

int main()
{
    system("color 70");
    while (1)
    {
    HERE:
        menu();
        if (c == 'S')
        {
            system("cls");
            start();
            break;
        }
        else if (c == 'H')
        {
            system("cls");
            help();
            getchar();
            goto HERE;
            break;
        }
        else if (c == 'Q')
        {
            exit(0);
        }
    }
    return 0;
}
