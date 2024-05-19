/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grocery.h"

int main() {
    char Name[n];
    char Address[n];
    int Phonenumber[n];

    printf("Enter customer name:\n ");
    scanf("%s", Name);
    printf("Enter customer address:\n ");
    scanf(" %s", Address);
    printf("enter customer Phone number:\n ");
    scanf("%d", Phonenumber);

    int Products;
    printf("Enter the number of products:\n ");
    scanf("%d", &Products);

    char names[m][n];
    float cost[m];
    int quantities[m] = {0}; // Initialize quantities array to 0

    // Input product details
    for (int i = 0; i < Products; ++i) {
        printf("Enter name and price for product %d:\n", i + 1);
        scanf("%s %f", names[i], &cost[i]);
    }

    int choice;
    do {
        printf("\tMENU\t\n");
        printf("\t1. Display Products\t\n");
        printf("\t2. Add Products to Cart\t\n");
        printf("\t3. Calculate Total\t\n");
        printf("\t4. Final Bill\t\n");
        printf("\t5. Done\t\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                choose(names, cost, Products);
                break;
            case 2: {
                int index, quantity;
                printf("Enter product index and quantity:\n ");
                scanf("%d %d", &index, &quantity);
                if (index >= 1 && index <= Products) {
                    quantities[index - 1] += quantity;
                    printf("Product added.\n");
                } else {
                    printf("Invalid product index.\n");
                }
                break;
            }
            case 3: {
                float Total = total(cost, quantities, Products);
                printf("Total amount: Rs%f\n", Total);
                break;
            }
            case 4:
                finalbill(names, cost, quantities, Products, Name, Address,Phonenumber);
                break;
            case 5:
                printf("Done!\n");
                break;
            default:
                printf("Invalid!!\n");
        }
    } while (choice != 5);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "grocery.h"

#define length 50

int main() {
    char Name[length];
    char Address[length];
    char Phonenumber[length];

    printf("Enter customer name: ");
    scanf("%s", Name);
    printf("Enter customer address: ");
    scanf(" %s", Address);
    printf("Enter customer Phone number: ");
    scanf("%s", Phonenumber);

    int numProducts;
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    struct Product *products = malloc(MAX_PRODUCTS * sizeof(struct Product));
    if (products == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int *quantities = malloc(MAX_PRODUCTS * sizeof(int));
    if (quantities == NULL) {
        printf("Memory allocation failed!\n");
        free(products);
        return 1;
    }

    for (int i = 0; i < numProducts; ++i) {
        printf("Enter name and price for product %d: ", i + 1);
        scanf("%s %f", products[i].name, &products[i].price);
    }

    struct User *users = NULL;
    int N_Users = 0;
    registerUser(&users, &N_Users);

    char Username[length];
    char Password[length];
    printf("Enter Username: ");
    scanf("%s", Username);
    printf("Enter Password: ");
    scanf("%s", Password);

    int authIndex = authenticate(users, N_Users, Username, Password);
    if (authIndex != -1) {
        printf("Login successful!\n");

        int choice;
        do {
            printf("\n\tMENU\t\n");
            printf("\t1. Display Products\t\n");
            printf("\t2. Add Products to Cart\t\n");
            printf("\t3. Calculate Total\t\n");
            printf("\t4. Final Bill\t\n");
            printf("\t5. Done\t\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1:
                    choose(products, numProducts);
                    break;
                case 2: {
                    int index, quantity;
                    printf("Enter product index and quantity: ");
                    scanf("%d %d", &index, &quantity);
                    if (index >= 1 && index <= numProducts) {
                        quantities[index - 1] += quantity;
                        printf("Product added.\n");
                    } else {
                        printf("Invalid product index.\n");
                    }
                    break;
                }
                case 3: {
                    float Total = total(products, quantities, numProducts);
                    printf("Total amount: Rs%.2f\n", Total);
                    break;
                }
                case 4:
                    finalbill(products, quantities, numProducts, Name, Address, Phonenumber);
                    break;
                case 5:
                    printf("Done\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        } while (choice != 5);
    } else {
        printf("Login failed. Invalid Username or Password.\n");
    }

    // Free dynamically allocated memory
    free(users);
    free(products);
    free(quantities);

    return 0;
}*/



//updated code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "grocery.h"

#define length 50
#define CUSTOMER_FILE "customers.txt"

void saveCustomerDetails(const char *name, const char *address, const char *phone) {
    FILE *file = fopen(CUSTOMER_FILE, "a");
    if (file == NULL) {
        printf("Failed to open file for writing customer details.\n");
        return;
    }
    fprintf(file, "Name: %s, Address: %s, Phone: %s\n", name, address, phone);
    fclose(file);
}

int main() {
    char Name[length];
    char Address[length];
    char Phonenumber[length];

    printf("Enter customer name: ");
    scanf("%s", Name);
    printf("Enter customer address: ");
    scanf(" %s", Address);
    printf("Enter customer Phone number: ");
    scanf("%s", Phonenumber);

    int numProducts;
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    struct Product *products = malloc(MAX_PRODUCTS * sizeof(struct Product));
    if (products == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int *quantities = malloc(MAX_PRODUCTS * sizeof(int));
    if (quantities == NULL) {
        printf("Memory allocation failed!\n");
        free(products);
        return 1;
    }

    for (int i = 0; i < numProducts; ++i) {
        printf("Enter name and price for product %d: ", i + 1);
        scanf("%s %f", products[i].name, &products[i].price);
    }

    struct User *users = NULL;
    int N_Users = 0;
    registerUser(&users, &N_Users);

    char Username[length];
    char Password[length];
    printf("Enter Username:\n ");
    scanf("%s", Username);
    printf("Enter Password:\n ");
    scanf("%s", Password);

    int authIndex = authenticate(users, N_Users, Username, Password);
    if (authIndex != -1) {
        printf("Login successful!\n");

        int choice;
        do {
            printf("\n\tMENU\t\n");
            printf("\t1. Display Products\t\n");
            printf("\t2. Add Products to Cart\t\n");
            printf("\t3. Calculate Total\t\n");
            printf("\t4. Final Bill\t\n");
            printf("\t5. Done\t\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1:
                    choose(products, numProducts);
                    break;
                case 2: {
                    int index, quantity;
                    printf("Enter product index and quantity:\n");
                    scanf("%d %d", &index, &quantity);
                    if (index >= 1 && index <= numProducts) {
                        quantities[index - 1] += quantity;
                        printf("Product added.\n");
                    } else {
                        printf("Invalid product index.\n");
                    }
                    break;
                }
                case 3: {
                    float Total = total(products, quantities, numProducts);
                    printf("Total amount: Rs%.2f\n", Total);
                    break;
                }
                case 4:
                    finalbill(products, quantities, numProducts, Name, Address, Phonenumber);
                    saveCustomerDetails(Name, Address, Phonenumber); // Save customer details to file
                    break;
                case 5:
                    printf("Done\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        } while (choice != 5);
    } else {
        printf("Login failed. Invalid Username or Password.\n");
    }

    // Free dynamically allocated memory
    free(users);
    free(products);
    free(quantities);

    return 0;
}


