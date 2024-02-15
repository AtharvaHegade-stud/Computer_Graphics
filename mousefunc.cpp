#include<GL/glu.h>
#include<GL/glut.h>


void MyInit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,150.0,0.0,120.0);
}


void myMouse(int button , int state , int x , int y){

	
	
	if(state==GLUT_DOWN && button == GLUT_LEFT_BUTTON){
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,0);
	glBegin(GL_LINES);
	glVertex2i(200,25);
	glVertex2i(25,5);
	glEnd();
	glFlush();
	}
	
	
	
	
}


int main(int p,char*v[])
{
glutInit(&p,v);
glutInitWindowSize(1000,1000);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(0,0);
glutCreateWindow("Window");
MyInit();
glutMouseFunc(myMouse);
glutMainLoop();
return 0;
}

