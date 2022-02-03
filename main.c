#include <stdio.h>
//#include <conio.h>
#define max 20
struct empDat {
    char * name; 
    long int code; 
    char * designation;
    int exp;
    long int pay; 
};
int num; 

void showMenu(); 

struct empDat emp[max];
struct empDat tempemp[max];
struct empDat sortemp[max];
struct empDat sortemp1[max];

void build()
{
    printf("Buildi the data table. \n");
    printf("Maximum entries can be %d \n", max); 

    printf("Enter the number of entries required: \n"); 
    scanf("%d", num);

    printf("So you want %d of them? \n ", num); 

}
int main(){

    printf("hallo, world! \n"); 
    build(); 

   // printf("wait %c", getch()); 
    return 0;
}