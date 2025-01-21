#include <stdio.h>
#include <strings.h>

struct Contact {
  char name[20];
  char lastname[20];
  char phone[10];
};

int main() {
  struct Contact contacts[100];
  char input[25] = "";
  char empty[2] = "";

  for(int i = 0; i < 100; i++) {
    strcpy(contacts[i].name, empty);
    strcpy(contacts[i].lastname, empty);
    strcpy(contacts[i].phone, empty);
  }

  while(strcmp(input, "quit") != 0) {
    printf("Select:\tadd\tfind\tdelete\tquit\n");
    scanf(" %24s", input);

    if(strcmp(input, "add") == 0) {
      char addName[20], addLast[20], addPhone[10];
      int isSpaceFree = 0;
      printf("Enter the name of the contact: \n");
      scanf(" %19s", addName);
      printf("Enter the lastname of the contact: \n");
      scanf(" %19s", addLast);
      printf("Enter the phone number of the contact: \n");
      scanf(" %9s", addPhone);

      for(int i = 0; i < 100; i++) {
        if(strcmp(contacts[i].name, empty) == 0) {
          strcpy(contacts[i].name, addName);
          strcpy(contacts[i].lastname, addLast);
          strcpy(contacts[i].phone, addPhone);

          isSpaceFree = 1;
          printf("The contact was successfully saved!\n\n");
          break;
        }
      }

      if(!isSpaceFree) {
        printf("Error. Memory is full, please delete old contacts first.\n\n");
      }

      //discarding characters in the buffer
      int ch;
      while ((ch = getchar()) != '\n' && ch != EOF);
      
    } else if (strcmp(input, "find") == 0) {
      char rName[20], rLast[20];
      int isFound = 0;
      printf("Type the name of the contact: ");
      scanf("%19s", rName);
      printf("Type the lastname of the contact: ");
      scanf("%19s", rLast);

      for(int i = 0; i < 100; i++) {
        if(strcmp(contacts[i].name, rName) == 0 && strcmp(contacts[i].lastname, rLast) == 0) {
          printf("The phone number of %s %s is: %s\n\n", rName, rLast, contacts[i].phone);
          isFound = 1;
          break;
        }
      }

      if(!isFound) {
        printf("The contact was not found.\n\n");
      }
    } else if (strcmp(input, "delete") == 0) {
      char dName[20], dLast[20];
      int isDeleted = 0;
      printf("Type the name of the contact: ");
      scanf("%19s", dName);
      printf("Type the lastname of the contact: ");
      scanf("%19s", dLast);

      for(int i = 0; i < 100; i++) {
        if(strcmp(contacts[i].name, dName) == 0 && strcmp(contacts[i].lastname, dLast) == 0) {
          strcpy(contacts[i].name, empty);
          strcpy(contacts[i].lastname, empty);
          strcpy(contacts[i].phone, empty);

          isDeleted = 1;
          printf("The contact was successfully deleted.\n\n");
          break;
        }
      }

      if(!isDeleted) {
        printf("Error. The contact to delete wasn't found.\n\n");
      }
    } else if (strcmp(input, "quit") == 0) {
      printf("Closing program...\n\n");
      return 0;
    } else {
      printf("Error. Unknown command.\n\n");
    }
  }

  return 0;
}