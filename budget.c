#include <stdio.h>
#include <stdlib.h>

//Function Declaration
void budgetMenu();

void budgetMenu() {

  int salary;

  printf("\nWELLCOME TO BUDGET MENU\n");

  printf("Insert your salary: ");
  scanf("%d", &salary);

  printf("Your salary is: %d\n", salary);

}