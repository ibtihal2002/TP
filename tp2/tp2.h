#ifndef TP2
#define TP2

#include<stdio.h>

#include<stdlib.h>

typedef struct s_point
{
	int a;
	int b;
} t_point


int **allocated_array(t_point dim);
void scan_dim(t_point *dim);
void fill_array(char **arr, t_point dim);
void print_array(char **arr, t_point dim);

