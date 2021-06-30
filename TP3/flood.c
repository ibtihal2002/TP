#include<stdio.h>
#include<stdlib.h>
struct s_point
{
	int x;
	int y;
};
typedef struct s_point t_point;

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


void scan_dim(t_point *dim)
{
	printf("entrer la dimension du tableau\n");
	scanf("%d%d",&(dim->x),&(dim->y));
	printf("dim= (%d,%d)\n", dim->x, dim->y);
}

void fill_array(char **arr, t_point dim)
{
	printf("enter the array inputs\n");
	for (int i = 0;i < dim.x;i++)
		for (int j = 0;j < dim.y;j++)
			scanf("%c",&arr[i][j]);
}

void print_array(char **arr, t_point dim)
{
	printf("here's your array\n");
	for (int i = 0;i < dim.x;i++)
	{
		for (int j = 0;j < dim.y;j++)
			printf("%c",arr [i][j]);
	}
}

int main()
{
	t_point dim;
	scan_dim(&dim);
	arr = allocated_array(dim);
	fill_array(arr,dim);
	print_array(arr,dim);
	return 0;
}