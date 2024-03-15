#include "stdio.h"
#include "windows.h"
#include "conio.h"
#include "string.h"
char player1[15];             // store the player 1 name
char player2[15];             // store the player 2 name
char choice1, choice2;        // store the choice of two players( X - O )
char decision;                //
char choice;                  // takes the choice of the user from menu
int turn_s;                   // stores the turns of the game
char OPTION_1, OPTION_2;      // stores the choice1 and choice2
char box[11] = {"123456789"}; // print on the board
void menu()                   // menu of the game
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
    choice = toupper(fgetc(stdin));
    fflush(stdin);
}
void gameboard() // game board
{
    printf("\n");
    printf("\t\t\t     |     |     \n");
    Sleep(300);
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[0], box[1], box[2]);
    Sleep(300);
    printf("\t\t\t_____|_____|_____\n");
    Sleep(300);
    printf("\t\t\t     |     |     \n");
    Sleep(300);
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[3], box[4], box[5]);
    Sleep(300);
    printf("\t\t\t_____|_____|_____\n");
    Sleep(300);
    printf("\t\t\t     |     |     \n");
    Sleep(300);
    printf("\t\t\t  %c  |  %c  |  %c  \n", box[6], box[7], box[8]);
    Sleep(300);
    printf("\t\t\t     |     |     \n");
}
// void DECISION(){
//     printf("\tENTER ANY KEY TO CONTIUE...");
//     decision = getch();
//     if(decision == 225){
//         decision:
//         printf("\n\tENTER \"ENTER KEY\" TO GO MENU\n\tENTER \"R\" TO PLAY AGAIN ");
//         decision = toupper(fgetc(stdin));
//         fflush(stdin);
//         if (decision == 13){
//             menu();
//         }
//         else if(decision == 'R'){
//             gamers_turn();
//         }
//         else{
//             printf("\n\n\tENTER THE RIGHT KEY !!");
//             Sleep(1000);
//             system("cls");
//             goto decision;
//         }
//     }
// }
int start()
{
    printf("\tENTER PLAYER 1 NAME : ");
    fflush(stdin);
    gets(player1); // take the player 1 name
    while (1)
    {
        printf("\tENTER YOUR CHOICE ('X' OR 'O'): ");
        choice1 = toupper(fgetc(stdin)); // take the player 1 choice
        fflush(stdin);
        OPTION_1 = choice1; // store the choice1 in option 1
        if (choice1 == 'X' || choice1 == 'O')
        {
            printf("\n\t\tPLAYER 1 ( %s ) CHOICE CONFIRMED --> \"%c\"\n\n", strupr(player1), choice1); // player 1 choice conformation
            Sleep(500);
            printf("\tENTER PLAYER 2 NAME : ");
            fflush(stdin);
            gets(player2); // take the player 2 name
            if (choice1 == 'X')
            {
                choice2 = 'O';
                OPTION_2 = choice2;                                                                      // store the choice2 in option 2
                printf("\n\t\tPLAYER 2 ( %s ) CHOICE CONFIRMED --> \"%c\"\n", strupr(player2), choice2); // player 2 choice conformation
            }
            else
            {
                choice2 = 'X';
                OPTION_2 = choice2;                                                              // store the choice2 in option 2
                printf("\n\t\tPLAYER 2 ( %s ) CHOICE CONFIRMED --> \"%c\"\n", player2, choice2); // player 2 choice conformation
            }
            break;
        }
        else
        {
            printf("\n\t\tWRONG CHOICE!, TRY AGAIN!!\n\n"); // if the choice is not ( X - O )
            Sleep(1000);
        }
    }
    Sleep(1500);
    system("cls");
    printf("\n\n\t\t\t\t\t---------------------- LET'S START ----------------------\n\n");
    Sleep(300);
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
int gamers_turn() //  switch the player turn according to game
{
    char turn;   // it is a local variable
    int BOX = 0; // store the number of box/cell are full
    turn = 'X';  // TURN IS FIXED TO 'X' SO GAME START FROM X
    int num;     // store the number to mark on the board
    if (turn || turn)
    {
        if (choice1 == turn)
        {
            turn_s = 0; // even turns = player 1
        }
        else
        {
            turn_s = 1; // odd turns = player 2
        }
        while (1)
        {
            if (turn_s % 2 == 0) // even turn
            {
                printf("\n\t\t\t   \" %s's TURN \"\n\n\t\tYOUR CHOICE ' %c '\n", player1, choice1);
                while (1)
                {
                    printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                    scanf("%d", &num);
                    if (num > 0 && num < 10) // check 0 < num < 10
                    {
                        if (box[num - 1] != 'X' && box[num - 1] != 'O') // check weeather the box is filled or not
                        {
                            box[num - 1] = turn;
                            gameboard();
                        }
                        else // if the board is occuipied
                        {
                            printf("\n\n\tTHE BOX IS ALREADY OCCUPIED\n\n");
                            Sleep(900);
                            turn_s = turn_s + 2; // to get an even turn again
                            continue;
                        }
                        winning_condition(turn); // check the winning conditions
                        BOX = BOX + 1;           // add 1 as box filled
                        Sleep(500);
                        turn = OPTION_2; // change turn to option 2 i.e choice 2
                        turn_s++;        // to get an odd turn
                        break;
                    }
                    else // if the number is invalid ( 0 or more than 10 )
                    {
                        printf("\n\n\tINVALID BOX NUMBER ( 1 - 9 )\n\n");
                        Sleep(900);
                    }
                }
                if (BOX == 9) // if box = 9 ends the game
                {
                    break;
                }
            }
            else
            {
                printf("\n\t\t\t   \" %s's TURN \"\n\n\t\tYOUR CHOICE ' %c '\n", player2, choice2);
                while (1)
                {
                    printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                    scanf("%d", &num);
                    if (num > 0 && num < 10) // check 0 < num < 10
                    {
                        if (box[num - 1] != 'X' && box[num - 1] != 'O') // check weeather the box is filled or not
                        {
                            box[num - 1] = turn;
                            gameboard();
                        }
                        else // if the board is occuipied
                        {
                            printf("\n\n\tTHE BOX IS ALREADY OCCUPIED\n\n");
                            Sleep(900);
                            turn_s = turn_s + 2; // to get an odd turn again
                            continue;
                        }
                        winning_condition(turn); // check the winning conditions
                        BOX = BOX + 1;           // add 1 as box filled
                        Sleep(500);
                        turn = OPTION_1; // change turn to option 2 i.e choice 2
                        turn_s++;        // to get an even turn
                        break;
                    }
                    else // if the number is invalid ( 0 or more than 10 )
                    {
                        printf("\n\n\tINVALID BOX NUMBER ( 1 - 9 )\n\n");
                        Sleep(900);
                    }
                }
                if (BOX == 9) // if box = 9 ends the game
                {
                    break;
                }
            }
        }
        printf("\n\n\tMATCH HAD BEEN DRAWN\n\n");
        turn_s = 0;
        system("cls");
        // DECISION();
    }
    return 0;
}
int winning_condition(int turn) // check the winning condition of players
{
    if (box[0] == turn && box[1] == turn && box[2] == turn) // chek the following boxes with followed turn
    {
        if (turn == OPTION_1) // if turn = option 1 where option 1 is choice 1 so player 1 wins
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else // other wise player 2 wins
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[3] == turn && box[4] == turn && box[5] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[6] == turn && box[7] == turn && box[8] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[0] == turn && box[3] == turn && box[6] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[1] == turn && box[4] == turn && box[7] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[2] == turn && box[5] == turn && box[8] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[2] == turn && box[4] == turn && box[6] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    else if (box[0] == turn && box[4] == turn && box[8] == turn)
    {
        if (turn == OPTION_1)
        {
            printf("\n\n\tplayer-1 wins!!");
        }
        else
        {
            printf("\n\n\tplayer-2 wins!!");
        }
        exit(1);
    }
    return 0;
}
int main()
{
    system("color 70");
    while (1)
    {
        menu();
        if (choice == 'S')
        {
            system("cls");
            start();
            break;
        }
        else if (choice == 'H')
        {
            system("cls");
            help();
            getchar();
        }
        else if (choice == 'Q')
        {
            exit(0);
        }
    }
    return 0;
}