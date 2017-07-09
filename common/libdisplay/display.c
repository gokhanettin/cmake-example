#include <math.h>
#include <stdlib.h>
#include "display.h"

/**
 * @brief Displays the given shape.
 *
 * Uses FreeGLUT to display the shape.
 *
 * @param[in] shape		shape pointer to display
 * @param[in] argc		argument count from main function
 * @param[in] argv		argument vector from main function
 */

#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

static void keyboard_func(unsigned char key, int x, int y)
{
  switch (key)
  {
    case '\x1B':
      exit(EXIT_SUCCESS);
      break;
  }
}

static void circle_blue_display_func()
{
	float radius = 1.0f;
	float i;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
		for(i = 0.0f; i < 2 * M_PI; i += M_PI / 12.0f)
				glVertex2f(cosf(i) * radius, sinf(i) * radius);
	glEnd();

	glFlush();
}

static void circle_green_display_func()
{
	float radius = 1.0f;
	float i;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 1.0f, 0.0f);

	glBegin(GL_POLYGON);
		for(i = 0.0f; i < 2 * M_PI; i += M_PI / 12.0f)
				glVertex2f(cosf(i) * radius, sinf(i) * radius);
	glEnd();

	glFlush();
}
static void square_red_display_func()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(1.0f, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f( 0.5f, -0.5f);
    glVertex2f( 0.5f,  0.5f);
    glVertex2f(-0.5f,  0.5f);
  glEnd();

  glFlush();
}

static void square_yellow_display_func()
{
  glClear(GL_COLOR_BUFFER_BIT);

  glColor3f(1.0f, 1.0f, 0.0f);

  glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f( 0.5f, -0.5f);
    glVertex2f( 0.5f,  0.5f);
    glVertex2f(-0.5f,  0.5f);
  glEnd();

  glFlush();
}


void display(const Shape *shape, int argc, char** argv)
{
	void (*display_func_ptr)(void) = NULL;
	if (shape->shape_type == CIRCLE && shape->color_type == BLUE)
	{
		display_func_ptr = circle_blue_display_func;
	}
	else if (shape->shape_type == CIRCLE && shape->color_type == GREEN)
	{
		display_func_ptr = circle_green_display_func;
	}
	else if (shape->shape_type == SQUARE && shape->color_type == RED)
	{
		display_func_ptr = square_red_display_func;
	}
	else if (shape->shape_type == SQUARE && shape->color_type == YELLOW)
	{
		display_func_ptr = square_yellow_display_func;
	}
	else
	{
		exit(EXIT_FAILURE);
	}

	glutInit(&argc, argv);
	glutCreateWindow("GLUT Test");
	glutKeyboardFunc(&keyboard_func);
	glutDisplayFunc(display_func_ptr);
	glutMainLoop();
}
