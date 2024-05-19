#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

void registerUser(struct User **users, int *N_Users) {
    int numNewUsers;
    printf("Enter the number of users: ");
    scanf("%d", &numNewUsers);

    
    *users = malloc(numNewUsers * sizeof(struct User));
    if (*users == NULL) {
        printf("failed!\n");
        exit(1);
    }

   
    printf("Enter user details:\n");
    for (int i = 0; i < numNewUsers; i++) {
        (*users)[i].Username = malloc(length * sizeof(char));
        if ((*users)[i].Username == NULL) {
            printf(" failed!\n");
            exit(1);
        }
        (*users)[i].Password = malloc(length * sizeof(char));
        if ((*users)[i].Password == NULL) {
            printf("failed!\n");
            exit(1);
        }

        printf("User %d:\n", *N_Users + i + 1);
        printf("Username: ");
        scanf("%s", (*users)[i].Username);
        printf("Password: ");
        scanf("%s", (*users)[i].Password);
    }

    *N_Users += numNewUsers;
}

int authenticate(struct User users[], int N_Users, char Username[], char Password[]) {
    for (int i = 0; i < N_Users; i++) {
        if (strcmp(users[i].Username, Username) == 0 && strcmp(users[i].Password, Password) == 0) {
            return i; 
        }
    }
    return -1; 
}       
