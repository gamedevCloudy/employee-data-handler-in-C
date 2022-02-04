#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#define max 20
struct empDat {
    long int eNo; 
    char * eName; 
    long int salary; 
};
int num; 

void init()
{
    printf("Hello, Weclome! \n \n");
    printf("Employee Data Handler \n");
    printf("by Aniruddha Maradwar \n");
    printf("\n \n");
}

int menu()
{
    int menuOption; 

    printf("Options: \n \n "); 
    printf("1. Enter Data \n ");
    printf("2. Display Employee Data \n "); 
    printf("3. Search Employee by Name \n "); 
    printf("4. Search Employee by Employee Number \n "); 
    printf("5. Display all employees having salary between 20000 to 5000 \n "); 
    printf("6. Quit.");
    printf("\n\n"); 
    printf("Choose Option:- "); scanf("%d", &menuOption); 
    return menuOption;  
}

void perform(int actionToPerform)
{
    printf("You chose: %d \n", actionToPerform);
    switch (actionToPerform)
    {
        // clear screen 
        system(clear); 
        case 1: 
        printf("Enter Data:- \n"); 
        break; 

        case 2: 
        printf("Display Employee Data"); 
        break;

        case 3:
        break; 

        case 4:
        break; 

        case 5:
        break; 

        case 6:
        //quit program
        break; 

        default: 
        //exit to main menu
        printf("Incorrect Option \n"); 
        //clear screen
        menu(); 
        break; 
    }
}


int main()
{
    int action = 0; 
    init(); 
    action = menu();
     
    //clear screen 
    perform(action); 

    //system("clear"); 
    printf("wait, %c", getch()); 
    return 0;
}