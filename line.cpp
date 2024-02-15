#include<GL/glu.h>
#include<GL/glut.h>


void MyInit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,150.0,0.0,120.0);
}

void Display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,1,0);
glBegin(GL_LINES);
glVertex2i(200,25);
glVertex2i(25,5);
glEnd();
glFlush();
}

int main(int p,char*v[])
{
glutInit(&p,v);
glutInitWindowSize(200,200);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(1500,1600);
glutCreateWindow("Window");
MyInit();
glutDisplayFunc(Display);
glutMainLoop();
}

