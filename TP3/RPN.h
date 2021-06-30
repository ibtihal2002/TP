#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cellule
{
    int element;
    struct cellule * suivant;
};
typedef struct cellule cellule;
typedef cellule * pile;

// Prototypes
void empiler(int,pile *);
void depiler(pile *);
void liberer(pile);
int RPN(char *);
