/*
** EPITECH PROJECT, 2017
** vectors calc
** File description:
** prog that calc the vector properties
*/
#include <libmath.h>


int accelerate (float x0, float y0, float z0, float x1, float y1, float z1)
{
	float xF;
	float yF;
	float zF;

	xF = x1 - x0;
	yF = y1 - y0;
	zF = z1 - z0;
	printf ("The speed vector coordinates are : \n");
	printf ("(%f;%f;%f)\n", xF, yF, zF);
	return(0);
}

int time_coord(float x0, float y0, float z0, float x1, float y1, float z1, int n)
{
	float xG = x1 * n;
	float yG = y1 * n;
	float zG = z1 * n;

	printf("At time t+%d, ball coordinates will be : \n", n);
	printf("(f;%f;%f)\n", xG, yG, zG);
	return(0);
}
