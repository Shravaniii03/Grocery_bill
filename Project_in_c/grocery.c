/*#include <stdio.h>
#include "grocery.h"

void choose(char names[][n], float cost[], int Products) {
    printf("\nAvailable Products:\n");
    for (int i = 0; i < Products; ++i) {
        printf("%d %s - Rs%f\n", i+1, names[i], cost[i]);
    }
}

float total(float cost[], int quantities[], int items) {
    float total = 0;
    for (int i = 0; i < items; ++i) {
        total += cost[i] * quantities[i];
    }
    return total;
}

void finalbill(char names[][n], float cost[], int quantities[], int Products, char Name[], char Address[], int Phonenumber[]) {
    float subtotal = 0;

    printf("\t******GROCERGO******\t\n");
    printf("-----------------------------------------\n");
    printf("\nWelcome!\n");
    printf("-----------------------------------------\n");
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", Name);
    printf("Address: %s\n", Address);
    printf("Phone number : %d\n",Phonenumber);

    printf("-----------------------------------------\n");
    printf("%-20s%-10s%-10s\n", "Product", "Price", "Quantity");
    printf("-----------------------------------------\n");
    for (int i = 0; i < Products; ++i) {
        if (quantities[i] > 0) {
            printf("%-20sRs%-9f%-10d\n", names[i],cost[i], quantities[i]);
            subtotal += cost[i] * quantities[i];
        }
    }
    printf("-----------------------------------------\n");
    float gstaddition = subtotal * GST;
    float totalAmount = subtotal + gstaddition;
    printf("Subtotal: Rs%f\n", subtotal);
    printf("GST (9%%): Rs%f\n", gstaddition);
    printf("Total amount (including GST): Rs%f\n", totalAmount);
    printf("Thank You,Visit Again!\n");
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include "grocery.h"

void choose(struct Product products[], int numProducts) {
    printf("\nAvailability:\n");
    for (int i = 0; i < numProducts; ++i) {
        printf("%d %s - Rs%.2f\n", i+1, products[i].name, products[i].price);
    }
}

float total(struct Product products[], int quantities[], int numProducts) {
    float total = 0;
    for (int i = 0; i < numProducts; ++i) {
        total += products[i].price * quantities[i];
    }
    return total;
}

void finalbill(struct Product products[], int quantities[], int numProducts, char Name[], char Address[], char Phonenumber[]) {
    float subtotal = 0;

    printf("\tGROCERGO\t\n");
    printf("-----------------------------------------\n");
    printf("\nWelcome!\n");
    printf("-----------------------------------------\n");
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", Name);
    printf("Address: %s\n", Address);
    printf("Phone number : %s\n", Phonenumber);

    printf("-----------------------------------------\n");
    printf("%-20s%-10s%-10s\n", "Product", "Price", "Quantity");
    printf("-----------------------------------------\n");
    for (int i = 0; i < numProducts; ++i) {
        if (quantities[i] > 0) {
            printf("%-20sRs%-9.2f%-10d\n", products[i].name, products[i].price, quantities[i]);
            subtotal += products[i].price * quantities[i];
        }
    }
    printf("-----------------------------------------\n");
    float gstaddition = subtotal * GST;
    float totalAmount = subtotal + gstaddition;
    printf("Subtotal: Rs%.2f\n", subtotal);
    printf("GST (9%%): Rs%.2f\n", gstaddition);
    printf("Total amount (with GST): Rs%.2f\n", totalAmount);
    printf("Thank You, Visit Again!\n");
}*/


//updated code
#include <stdio.h>
#include <stdlib.h>
#include "grocery.h"

void choose(struct Product products[], int numProducts) {
    printf("\nAvailability:\n");
    for (int i = 0; i < numProducts; ++i) {
        printf("%d %s - Rs%.2f\n", i+1, products[i].name, products[i].price);
    }
}

float total(struct Product products[], int quantities[], int numProducts) {
    float total = 0;
    for (int i = 0; i < numProducts; i++) {
        total += products[i].price * quantities[i];
    }
    return total;
}


void finalbill(struct Product products[], int quantities[], int numProducts, char Name[], char Address[], char Phonenumber[]) {
    float subtotal = 0;

    printf("\tGROCERGO\t\n");
    printf("-----------------------------------------\n");
    printf("\nWelcome!\n");
    printf("-----------------------------------------\n");
    printf("\nCustomer Details:\n");
    printf("Name: %s\n", Name);
    printf("Address: %s\n", Address);
    printf("Phone number : %s\n", Phonenumber);

    printf("-----------------------------------------\n");
    printf("%-20s%-10s%-10s\n", "Product", "Price", "Quantity");
    printf("-----------------------------------------\n");
    for (int i = 0; i < numProducts; ++i) {
        if (quantities[i] > 0) {
            printf("%-20sRs%-9.2f%-10d\n", products[i].name, products[i].price, quantities[i]);
            subtotal += products[i].price * quantities[i];
        }
    }
    printf("-----------------------------------------\n");
    float gstaddition = subtotal * GST;
    float totalAmount = subtotal + gstaddition;
    printf("Subtotal: Rs%.2f\n", subtotal);
    printf("GST (9%%): Rs%.2f\n", gstaddition);
    printf("Total amount (with GST): Rs%.2f\n", totalAmount);
    printf("Thank You, Visit Again!\n");
}             
