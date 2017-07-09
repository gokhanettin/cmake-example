/*
 * display.h
 *
 *  Created on: Jul 8, 2017
 *      Author: gokhanettin
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

/**
 * @brief Color type of a given shape.
 *
 * We have only red, yellow, green and blue colored shapes for this example.
 */
typedef enum ColorType {
	RED,    /**< Red color    */
	YELLOW, /**< Yellow color */
	GREEN,  /**< Green color  */
	BLUE    /**< Red color    */
}ColorType;

/**
 * @brief Shape type that specifies which shape we are going to display.
 *
 * We have only square and circle shapes for this example.
 */
typedef enum ShapeType {
	SQUARE, /**< Square shape */
	CIRCLE  /**< Circle shape */
}ShapeType;


/**
 * @brief Shape struct that contains required info to display a shape.
 *
 * We must know the shape to display and the color of a shape.
 */
typedef struct Shape {
ColorType color_type; /**< Color of the shape */
ShapeType shape_type; /**< Shape type either SQUARE or CIRCLE */
}Shape;

void display(const Shape *shape, int argc, char** argv);

#endif /* DISPLAY_H_ */
