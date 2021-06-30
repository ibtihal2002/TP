#ifndef PALINDROME_EXO_H
#endif PALINDROME_EXO_H


#include<stdio.h>
#include<stdlib.h>


struct node
{
	char ch;
	struct node *next;
};typedef struct node node;


node add(char ch)
{
	node newnode=new node();
	newnode.ch=ch;
	newnode.next=NULL;
	return newnode;
}





