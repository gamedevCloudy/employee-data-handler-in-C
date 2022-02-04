/* Employee Data Handler by Aayush aka Cloudy*/
#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include <string.h>

struct empDat {
  long int eNo; 
  char eName[10]; 
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

    printf("\nOptions: \n \n "); 
    printf("1. Display Employee Data \n ");
    printf("2. Search Employee by Name\n "); 
    printf("3. Search Employee by Employee Number\n "); 
    printf("4. Display all employees having salary between 20000 to 5000 \n "); 
    printf("5. Display employee with minimum salary.\n "); 
    printf("6. Quit. \n");
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
    long int a,b, minSal; 

    switch (actionToPerform)
    {  
        case 1: 
            printf("\n \nDisplaying Employee Data... \n"); 
            for(int i = 0; i < timesToPerform; i++)
            {
                printf("\n%ld\t  %s  Salary:- %ld", eDat[i].eNo, eDat[i].eName, eDat[i].salary);
								printf("\n"); 
            }
        break; 
            
        case 2: 
        
        printf("Enter epmloyee's name to serach:- ");
        scanf("%s", eNm); 
        for(int i = 0; i < timesToPerform; i++)
        {
            if(strcmp(eDat[i].eName, eNm) == 0)
            {
                printf("\n %ld\t %s  Salary:- %ld",  eDat[i].eNo, eDat[i].eName, eDat[i].salary);
            }
        }
        if(i >= timesToPerform) printf("\n Record not found. \n");  
        break;

        case 3:
        printf("Enter epmloyee's code to serach:- ");
        scanf("%ld", &eCode); 
        for(int i = 0; i< timesToPerform; i++)
        {
          if(eCode == eDat[i].eNo)
          {
            printf("\n %ld\t %s  Salary:- %ld", eDat[i].eNo, eDat[i].eName, eDat[i].salary);
          }
        }
        if(i == timesToPerform) printf("\n Record not found. \n");  
        break; 

        case 4:
        for(int i = 0; i < timesToPerform; i++) 
        {
            if(eDat[i].salary<= 20000 && eDat[i].salary >= 5000)
            {
                printf("\n%ld\t %s  Salary:- %ld",  eDat[i].eNo, eDat[i].eName, eDat[i].salary);
            }
						else if( i == (timesToPerform-1))
						{
							printf("No Valid Record Found!!!"); 
						}
        }
        break; 

        case 5:
				minSal = 5000; 
        for(int i =0; i < timesToPerform; i++)
        {
					if(eDat[i].salary < minSal)
					{
						minSal = eDat[i].salary; 
						printf("\n%ld\t %s  Salary:- %ld",  eDat[i].eNo, eDat[i].eName, eDat[i].salary);
					}  
        }
        break; 

        case 6: exit(0); 
        break; 

        default: 
        printf("\n Invalid Option. \n");  
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

        printf("\n\n Enter Employee Code:- "); 
        scanf("%ld", &eDat[i].eNo); 
        ch = getchar(); 
        printf("\n Enter Employee Name:- ");
        scanf("%s", eDat[i].eName);
		ch = getchar(); 
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
