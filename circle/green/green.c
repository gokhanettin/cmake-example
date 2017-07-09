/*
 * circle.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */

#include "green.h"


/**
 * @brief Initialize a green circle.
 *
 * Fills the given shape to specify a green circle.
 *
 * @param[out] shape	shape struct to fill
 */
void circle_green_init(Shape *shape)
{
	shape->color_type = GREEN;
	shape->shape_type = CIRCLE;
}
