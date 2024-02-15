#include<GL/glu.h>
#include<GL/glut.h>


void MyInit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,150.0,0.0,120.0);
}


void keyboard(unsigned char key,int x,int y){

	if(key=='p'){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,0);
	glBegin(GL_POINTS);
	glPointSize(3000);
	glVertex2i(20,25);
	glEnd();
	glFlush();
	}
	
	if(key=='l'){
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,0);
	glBegin(GL_LINES);
	glVertex2i(200,25);
	glVertex2i(25,5);
	glEnd();
	glFlush();
	}
	
	
	if(key=='t'){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(255,255,0); // yellow
	glBegin(GL_TRIANGLES);
	glVertex2i(10 , 20);
	glVertex2i(20 ,50);
	glVertex2i(50 , 40);
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
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}

