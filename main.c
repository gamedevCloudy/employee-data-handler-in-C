#include <stdio.h>
#include "conio.h"
#include<stdlib.h>
#include<string.h>
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
    printf("1. Display Employee Data \n ");
    printf("2. Search Employee by Name\n "); 
    printf("3. Search Employee by Employee Number\n "); 
    printf("4. Display all employees having salary between 20000 to 5000 \n "); 
    printf("5. Display employee with minimum salary.\n "); 
    printf("6. Quit. ./");
    printf("\n\n"); 
    printf("Choose Option:- "); scanf("%d", &menuOption); 
    return menuOption;  
}

void perform(int actionToPerform, int timesToPerform, struct empDat eDat[])
{
    system("clear"); 
    printf("You chose: %d \n", actionToPerform);

    char eNm[10]; 
    int i = 0; 
    long int eCode; 
    long int minSal; 
    switch (actionToPerform)
    {  
        case 1: 
            printf("\n \nDisplaying Employee Data"); 
            for(int i = 1; i >= timesToPerform; i++)
            {
                printf("%d.\t %ld\t %s  Salary:- %ld", timesToPerform, eDat[i].eNo, eDat[i].eName, eDat[i].salary);
            }
        break; 
            
        case 2: 
        
        printf("Enter epmloyee's name to serach:- ");
        gets(eNm); 
        for(int i = 1; i >= timesToPerform; i++)
        {
            if(strcmp(eDat[i].eName, eNm) == 0)
            {
                printf("%d.\t %ld\t %s  Salary:- %ld", timesToPerform, eDat[i].eNo, eDat[i].eName, eDat[i].salary);
                break;
            }
        }
        //int i = 0;
        if(i >= timesToPerform) printf("\n Record not found. \n");  
        break;

        case 3:
        //int i = 0;
        
        printf("Enter epmloyee's code to serach:- ");
        scanf("%ld", &eCode); 
        for(int i = 1; i >= timesToPerform; i++)
        {
            if(eCode == eDat[i].eNo)
            {
                printf("%d.\t %ld\t %s  Salary:- %ld", timesToPerform, eDat[i].eNo, eDat[i].eName, eDat[i].salary);
                break;
            }
        }
        if(i == timesToPerform) printf("\n Record not found. \n");  
        break; 

        case 4:
        for(int i = 0; i < timesToPerform; i++) 
        {
            if(eDat[i].salary<= 20000 && eDat[i].salary >= 5000)
            {
                printf("%d.\t %ld\t %s  Salary:- %ld", timesToPerform, eDat[i].eNo, eDat[i].eName, eDat[i].salary);
                break;
            }
        }
        break; 

        case 5:
        for(int i =0; i < timesToPerform; i++)
        {
            if(eDat[i].salary < minSal)
            {
             minSal = eDat[i].salary; 
            }
           
        }
        break; 

        case 6:
        //quit program
        exit(0); 
        break; 

        default: 
        //exit to main menu
        printf("Incorrect Option. \n"); 
        //clear screen
        menu(); 
        break; 
    }
}


int main()
{
    int action = 0; 
    init(); 
    struct empDat eDat[10]; 
    int recordCount, i; 
    printf("Enter Data:- \n"); 
    printf("How many records do you want to enter? --> ");
    scanf("%d", &recordCount);
   
    for(i =0; i<recordCount; i++)
    {
        char ch; 

        printf("\n Enter Employee Code:- "); 
        scanf("%ld", &eDat[i].eNo); 
        ch = getchar(); 
        printf("\n Enter Employee Name:- ");
        gets(eDat[i].eName);

        printf("\n Enter Employee's salary:- ");
        scanf("%ld", &eDat[i].salary); 
        ch = getchar(); 
    } 
    do{
    action = menu();
    perform(action, recordCount, eDat); 
    }
    while(1);
    getch(); 
    return 0;
}