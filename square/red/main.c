/*
 * main.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */


#include "red.h"
#include "square.h"

int main(int argc, char** argv)
{
	Shape shape;
	square_red_init(&shape);

	square_hello();
	display(&shape, argc, argv);
	return 0;
}
