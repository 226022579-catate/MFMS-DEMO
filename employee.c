#include <stdio.h>
#include <stdlib.h>

//Function Declaration
void employeeMenu();

void employeeMenu() {

  char name[50];
  int age;

  printf("\nWELLCOME TO EMPLOYEE MENU\n");

  printf("Insert first name: ");
  scanf("%49s", &name);

  printf("Enter age: ");
  scanf("%d", &age);

  printf("\nEmployee Name: %s\n", name);
  printf("Employee Age: %d\n", age);


}