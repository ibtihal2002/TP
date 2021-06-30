#ifndef TP2_EXO2
#define TP2_EXO2

#include <stdio.h>
#include<stdlib.h>


struct tab
{
    unsigned size;
    int *head;
};
typedef struct tab tab;



struct node
{
    int element;
    struct node * next;

};
typedef struct node;
typedef struct node * liste;

                        /////prototypes ////////
void free_node(list L);
void remove_node(list *L,int x);
void printList(list L);
list array_list(tab T);
list create_node(int x);
void add_node(list L,int x);
unsigned longueur(list L);
int listeVide(list L);

#endif 
