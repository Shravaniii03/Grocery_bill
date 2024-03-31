#include <stdio.h>
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
}
