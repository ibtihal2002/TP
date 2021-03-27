#include<stdio.h>
#include<stdlib.h>



int **allocated_array(t_point dim)
{
	char **arr;
	arr=(char**) malloc(sizeof(char*) * dim.x);
	for (int i=0;i< dim.x;i++)
	{
		arr = (char*) malloc(sizeof(char) * dim.y);
	}
	return arr;
}
