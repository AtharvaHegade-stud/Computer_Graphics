#include<GL/glut.h>
void init(void)
{
glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0 ,150.0 , 0.0 , 120.0);
}

void display(){
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(255,255,0); // yellow
glBegin(GL_TRIANGLES);
glVertex2i(10 , 20);
glVertex2i(20 ,50);
glVertex2i(50 , 40);
glEnd();
glFlush();
}


int main(int argc,char** argv){
glutInit(&argc , argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1000,1000);
glutInitWindowPosition(500,500);
glutCreateWindow("Triangle");

glutDisplayFunc(display);

init();
glutMainLoop();
return 0;
}
