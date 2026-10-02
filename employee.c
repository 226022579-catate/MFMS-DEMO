#include <stdio.h>
#include <stdlib.h>

//Function Declaration
void employeeMenu();
void addEmployee();
void displayEmployees();

 int employeeNum = 1;
 int age[1];
 char employeeName[1][50];
 int employeeID[1];
 char department[50];

void employeeMenu() {

  int option;

    printf("\n======WELCOME TO EMPLOYEE MENU======\n");
    printf("1. Add Employee\n");
    printf("2. Display Employees\n");
    printf("3. Search Employee\n");
    printf("4. Calculate Salary\n");
    printf("5. Display Employee Details\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &option); 

  int age[employeeNum];
  char employeeName[employeeNum][50];
  int employeeID[employeeNum];
  char department[50];

    switch(option){

      case 1:
        addEmployee();
        void employeeMenu(); // Return to the employee menu after adding employees
        break;

      case 2:
        displayEmployees();
        void employeeMenu(); // Return to the employee menu after displaying employees
        break;
      case 3:
        //searchEmployee();
        break;
    }

}

void addEmployee() {
 
  
  printf("\nEnter the number of employees to add: ");
  scanf("%d", &employeeNum);

  for(int i = 0; i < employeeNum; i++) {
    
    printf("\nEnter details for Employee %d:\n", i + 1);
    printf("Name: ");
    fgets(employeeName[i], sizeof(employeeName[i]), stdin);

  }

}

void displayEmployees() {
  // This function will display the list of employees
  printf("\nDisplaying Employees...\n");

  for(int i = 0; i < employeeNum; i++) {
    printf("Employee %d: \nName: %s\n", i + 1, employeeName[i]);
  }

  // Implementation for displaying employees will go here

}