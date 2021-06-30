//
//  pile.c
//  
//
//  
//

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
int pileVide(pile);
int lire(pile);
void empiler(int,pile *);
int depiler(pile *);
void affichage_pile(pile);
void liberer(pile);


// Pile vide

int pileVide(pile P)
{
    if(P==NULL)
        return 1;
    return 0;
}

// Lecture
int lire(pile P)
{
    if(pileVide(P)==0)
        return P->element;
    else
        exit(EXIT_FAILURE);
}

// Empilement d'une pile
void empiler(int x,pile * P)
{
    pile C=(pile)malloc(sizeof(cellule));
    C->element=x;
    C->suivant=*P;
    *P=C;
}

// Dépilement

void depiler(pile * P)
{
    if(pileVide(*P)==0)
    {
        int res=(*P)->element;
        pile temp=*P;
        *P=(*P)->suivant;
        free(temp);
    }

}

// Affichage

void affichage_pile(pile P)
{
    pile temp=P;
    while(temp->suivant!=NULL)
    {
        printf("%d, ",temp->element);
        temp=temp->suivant;
    }
    if(temp!=NULL)
        printf("%d\n",temp->element);
}

// Liberation
void liberer(pile P)
{
    while(P!=NULL)
    {
        pile temp=P;
        P=P->suivant;
        free(temp);
    }
}


int main()
{
    pile P=NULL;
    //printf("%d\n",lire(P));
    empiler(1,&P);
    affichage_pile(P);
    empiler(2,&P);
    affichage_pile(P);
    empiler(3,&P);
    empiler(4,&P);
    affichage_pile(P);
    depiler(&P);
    depiler(&P);
    affichage_pile(P);
    liberer(P);
}
