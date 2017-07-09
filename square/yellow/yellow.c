/*
 * circle.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */


#include "yellow.h"

/**
 * @brief Initialize a yellow square.
 *
 * Fills the given shape to specify a yellow square.
 *
 * @param[out] shape	shape struct to fill
 */
void square_yellow_init(Shape *shape)
{
	shape->color_type = YELLOW;
	shape->shape_type = SQUARE;
}

