#include <stdio.h>



// student structure
struct Student {
  char firstName[100];
  char lastName[100];
  char age[100];
  char studentId[100];
};


void printStudent(struct Student* student)
{
  printf("First name: %s\n", student->firstName);
  printf("Last name: %s\n", student->lastName);
  printf("Age: %s\n", student->age);
  printf("Student ID: %s\n", student->studentId);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++) {
    printStudent(&students[i]);
  }
}


int main()
{

  // an array of students
  //xxx students;
  struct Student students[100];

  int numStudents = 0;
  while (1)
  {
    char input[256];
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    { 
      // enter a new student
      printf("Enter your first name:\n");
      fgets(students[numStudents].firstName, 100, stdin);

      printf("Enter your last name:\n");
      fgets(students[numStudents].lastName, 100, stdin);

      printf("Enter your age:\n");
      fgets(students[numStudents].age, 100, stdin);

      printf("Enter your student id:\n");
      fgets(students[numStudents].studentId, 100, stdin);

      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
