#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct node
{
	char lettre;
	struct node *next;
};
typedef struct node node;
typedef *node list;

