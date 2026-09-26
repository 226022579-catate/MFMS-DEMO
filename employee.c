#include <stdio.h>
#include <stdlib.h>


//Function Declaration
void employeeMenu();

void employeeMenu() {

  char name[50];
  int age;

  printf("\n Insert your name: ");
  //fgets(name, sizeof(name), stdin);

  scanf("%49s", &name);


  printf("\nInsert your age: ");
  scanf("%d", &age);

  printf("Hello, %s! You are %d years old.", name, age);

}