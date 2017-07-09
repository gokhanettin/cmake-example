/*
 * main.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */


#include "circle.h"
#include "blue.h"

int main(int argc, char** argv)
{
	Shape shape;
	circle_blue_init(&shape);

	circle_hello();
	display(&shape, argc, argv);
	return 0;
}
