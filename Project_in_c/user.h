#ifndef USER_H
#define USER_H
#define length 50

struct User {
    char *Username;
    char *Password;
};

void registerUser(struct User **users, int *N_Users);
int authenticate(struct User users[], int N_Users, char Username[], char Password[]);

#endif
