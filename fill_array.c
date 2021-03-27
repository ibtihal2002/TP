#include<stdio.h>
#include<stdlib.h>

void fill_array(char **arr, t_point dim)
{
	printf("enter the array inputs\n");
	for (int i = 0;i < dim.x;i++)
		for (int j = 0;j < dim.y;j++)
			scanf("%c",&arr[i][j]);
}
