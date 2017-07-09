/*
 * main.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */


#include "circle.h"
#include "green.h"

int main(int argc, char** argv)
{
	Shape shape;
	circle_green_init(&shape);

	circle_hello();
	display(&shape, argc, argv);
	return 0;
}
