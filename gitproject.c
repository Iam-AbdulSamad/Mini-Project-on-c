#include "stdio.h"
#include "windows.h"
char player1[15];
char player2[15];
char choice1, choice2;
char c;
int i;
char OPTION_1, OPTION_2;
char box[11] = {"123456789"};
int gamers_turn();
int display_choice(int num, char turn);
int winning_condition();
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
int winning_condition(){
    if(box[0] == OPTION_1 && box[1] == OPTION_1 && box[2] == OPTION_1 && OPTION_2){
        if(box[0] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[3] == OPTION_1 && box[4] == OPTION_1 && box[5] == OPTION_1 && OPTION_2){
        if(box[3] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[6] == OPTION_1 && box[7] == OPTION_1 && box[8] == OPTION_1 && OPTION_2){
        if(box[6] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[0] == OPTION_1 && box[4] == OPTION_1 && box[8] == OPTION_1 && OPTION_2){
        if(box[0] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[2] == OPTION_1 && box[4] == OPTION_1 && box[6] == OPTION_1 && OPTION_2){
        if(box[2] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[0] == OPTION_1 && box[3] == OPTION_1 && box[6] == OPTION_1 && OPTION_2){
        if(box[0] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[1] == OPTION_1 && box[4] == OPTION_1 && box[7] == OPTION_1 && OPTION_2){
        if(box[1] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else if(box[2] == OPTION_1 && box[5] == OPTION_1 && box[8] == OPTION_1 && OPTION_2){
        if(box[2] == OPTION_1){
        printf("player-1 wins!!");
        exit(1);
        }
        else{
        printf("player-2 wins!!");
        exit(1);
        }
    }
    else{
       
    }
    return 0;
}
int gamers_turn()
{
    char turn;
    turn = 'X';
    int num;
    if (turn || turn)
    {
        if (choice1 == turn )
        {
            i = 0;
        }
        else
        {
            i = 1;
        }
        while (i < 15)
        {

            if (i % 2 == 0)
            {
                printf("\n\t\t%s's TURN ---\n\t\t%s choice - '%c'\n\n", player1, player1, choice1);
                printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                scanf("%d", &num);
                turn = display_choice(num, turn);
                winning_condition();
                Sleep(1500);
                turn = OPTION_2;
                i++;
            }
            else if (i % 2 == 1)
            {
                printf("\n\t\t%s's TURN ---\n\t\t%s choice - '%c'\n\n", player2, player2, choice2);
                printf("\t\tENTER THE NUMBER TO MARK ON THE BOARD : ");
                scanf("%d", &num);
                turn = display_choice(num, turn);
                winning_condition();
                Sleep(1500);
                turn = OPTION_1;
                if(i == 9){
                    break;
                }
                i++;
            }
            else
            {
                printf("TURNED SKIPPED (INCORRECT CHOICE)\n");
            }
        }
    }
    return 0;
}
int display_choice(int num, char turn)
{
    if (num > 0 && num < 10)
    {
        if( box[num -1] != 'X' && box[num -1] != 'O') 
        box[num - 1] = turn;
        gameboard();
    }
    else if (turn == choice1){
        printf("\n\n\tYOU HAVE ENTERED WRONG NUMBER");
        Sleep(1000);
        i--;
    }
    else{
        printf("\n\n\tYOU HAVE ENTERED WRONG NUMBER");
        Sleep(1000);
        i++;
    }
    return turn;
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
