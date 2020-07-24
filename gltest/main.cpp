#include <iostream>
#include "GL/glut.h"

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutWireTeapot(0.6);
	glutSwapBuffers();
}

int main(int argc, char * argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("GLUT Test");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}