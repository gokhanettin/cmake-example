/*
 * square.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */

#include "red.h"


/**
 * @brief Initialize a red square.
 *
 * Fills the given shape to specify a red square.
 *
 * @param[out] shape	shape struct to fill
 */
void square_red_init(Shape *shape)
{
	shape->color_type = RED;
	shape->shape_type = SQUARE;
}


