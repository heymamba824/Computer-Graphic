#include <iostream>
#include <GLUT/GLUT.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void draw()
{
    glClearColor(0.0,0.0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5,-0.5,0.5,0.5);
    glFlush();
}


int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("howmework1");
    glutDisplayFunc(draw);
    glutMainLoop();
}

void draw()
{
    glClearColor(0.0,0.0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5,-0.5,0.5,0.5);
    glFlush();
}


int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    gluInitWindowPosition(0,0);
    gluInitWindowSize(500,500);
    glutCreateWindow("howmework1");
    glutDisplayFunc(draw);
    glutMainLoop();
}
