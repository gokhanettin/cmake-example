/*
 * main.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */


#include "yellow.h"
#include "square.h"

int main(int argc, char** argv)
{
	Shape shape;
	square_yellow_init(&shape);

	square_hello();
	display(&shape, argc, argv);
	return 0;
}
