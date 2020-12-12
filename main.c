#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>



    COORD coord = {0, 0};  // sets coordinates to (0,0) as global variables
    void gotoxy (int x, int y)
    {
            coord.X = x; coord.Y = y; // X and Y are the coordinates
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }


void mainMenu (void);
void returnFunc (void);
void addBooks (void);

void deleteBooks (void);
void editBooks (void);
void searchBooks (void);
void issueBooks (void);
void viewBooks (void);

void issueRecord ();
void closeApplication (void);
int getData ();
int checkId (int);
void Password ();
void goToXY (int x, int y);
delay (unsigned int mseconds);
int t (void);

char password[10]={"Orange20"};

int main()
{
    Password();
}

void Password() {
    system("cls");

    char d[25] = "Password Protected";
    char ch, pass[10];
    int i=0, j;
//textbackground(WHITE);
//textcolor(RED);

    gotoxy(10,4);

    for(j=0;j<20;j++)       //Print **Password Protected**
        {
            Sleep(50);
            printf("*");
        }

    for(j=0;j<20;j++)       //Print **Password Protected**
        {
            Sleep(50);
            printf("%c",d[j]);
        }

    for(j=0;j<20;j++)       //Print **Password Protected**
        {
            Sleep(50);
            printf("*");
        }

    gotoxy(10,10);
    gotoxy(15,7);

    printf("Enter Password:");

    while(ch!=13)
        {
            ch = getch();

            if (ch!=13 && ch!=8) {       // Enter Password with asterisks for privacy. Allows you to enter more than one character.
                putch('*');
                pass[i] = ch;
                i++;
            }
        }

    pass[i] = '\0';                     // Enters a NULL for the last "i" that is added

    if(strcmp(pass,password)==0) {      // Compares the Password and Entry to see if it matches: Enters if so... "else" if not

        gotoxy(15,9);
        //textcolor(BLINK);
        printf("Password match");
        gotoxy(17,10);
        printf("Press any key to countinue.....");
        getch();                        // Press any key to continue the program
        mainMenu();                     // Enters into the main menu
    }
        else {
            gotoxy(15,16);
            printf("\aWarning!! Incorrect Password");
            getch();                    // Press any key to retry password
            Password();                 // Restarts the "Password" Function
        }
}

void mainMenu (void){

    system("cls");
    int menu;

    gotoxy(20,3);                                  //MENU FUNCTION
    printf("------- MAIN MENU -------");
    gotoxy(20,5);
    printf("(1.) Add Books");
    gotoxy(20,7);
    printf("(2.) Delete books");
    gotoxy(20,9);
    printf("(3.) Search Books");
    gotoxy(20,11);
    printf("(4.) Issue Books");
    gotoxy(20,13);
    printf("(5.) View Book List");
    gotoxy(20,15);
    printf("(6.) Edit Book's Record");
    gotoxy(20,17);
    printf("(7.) Close Application");
    gotoxy(20,19);
    printf("-------------------------");
    gotoxy(20,20);
    t();
    gotoxy(20,21);
    printf("Enter Your Selection : ");

    scanf("%d", &menu);              //Function : Menu and Option

            switch (menu) {         // Switch: Menu Options
        case 1 : addBooks();
        case 2: deleteBooks();
        case 3: searchBooks();
        case 4: issueBooks();
        case 5: viewBooks();
        case 6: editBooks() ;
        case 7: closeApplication();
        default: ;
            }

}

void addBooks (void) {                                  //ADD BOOK FUNCTION
    int category;

    printf("\n\n\t\t ------- SELECT CATEGORY -------");
    printf("\n\t\t (1.) Computer \n\t\t (2.) Electronics \n\t\t (3.) Electrical  \n\t\t (4.) Civil \n\t\t (5.) Mechanical \n\t\t (6.) Architecture \n\t\t (7.) Back to main menu");
    printf("\n\t\t -------------------------------\n\n\t\tYour Selection : ");
    scanf("%d", &category);

    if (category == 7) {
        system("cls");
        mainMenu();

    }
}

void deleteBooks (void) {

}

void searchBooks (void) {

}

void issueBooks (void) {

}

void viewBooks (void) {

}

void editBooks (void) {

}

void closeApplication (void) {
    exit(0);
}

int getData(){

}

int t (void) {
    time_t t;

    time(&t);
    printf("Date and time: %s\n",ctime(&t));   // Displays the time

    return 0 ;
}
