/*#ifndef GROCERY_H
#define GROCERY_H

#define m 100
#define n 50
#define GST 0.09

void choose(char names[][n], float cost[], int Products);
float total(float cost[], int quantities[], int items);
void finalbill(char names[][n], float cost[], int quantities[], int Products, char Name[], char Address[], int Phonenumber[]);

#endif*/



/*#ifndef GROCERY_H
#define GROCERY_H

#define length 50
#define MAX_PRODUCTS 100
#define GST 0.09

struct Product {
    char name[length];
    float price;
};

void choose(struct Product products[], int numProducts);
float total(struct Product products[], int quantities[], int numProducts);
void finalbill(struct Product products[], int quantities[], int numProducts, char Name[], char Address[], char Phonenumber[]);

#endif*/


//updated code
#ifndef GROCERY_H
#define GROCERY_H

#define length 50
#define MAX_PRODUCTS 100
#define GST 0.09

struct Product {
    char name[length];
    float price;
};

void choose(struct Product products[], int numProducts);
float total(struct Product products[], int quantities[], int numProducts);
void finalbill(struct Product products[], int quantities[], int numProducts, char Name[], char Address[], char Phonenumber[]);

#endif 

