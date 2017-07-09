/*
 * circle.c
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */

#include "blue.h"


/**
 * @brief Initialize a blue circle.
 *
 * Fills the given shape to specify a blue circle.
 *
 * @param[out] shape	shape struct to fill
 */
void circle_blue_init(Shape *shape)
{
	shape->color_type = BLUE;
	shape->shape_type = CIRCLE;
}
