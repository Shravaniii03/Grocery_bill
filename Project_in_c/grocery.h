#ifndef GROCERY_H
#define GROCERY_H

#define m 100
#define n 50
#define GST 0.09

void choose(char names[][n], float cost[], int Products);
float total(float cost[], int quantities[], int items);
void finalbill(char names[][n], float cost[], int quantities[], int Products, char Name[], char Address[], int Phonenumber[]);

#endif
