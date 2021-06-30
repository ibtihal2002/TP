#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<linked_list.h>



int main(int ac, char *av)
{
	int i=0;
	int j=strlen(av);
	while (i<=j)
{
		if(av[i]!=av[j])
			return 0;
		i++;
		j--;
	}
	return 1;	
}

struct node
{
	char lettre;
	struct node *next;
};
typedef struct node node;
typedef *node list;


list string_linkedlist(char *ch)
{
	list L=(list*)malloc(sizeof(node));
	for (int i=1;i<strlen(ch);i++)
	{
		L.lettre=ch[i];
		L.next=NULL;
	}
	return L;
}
