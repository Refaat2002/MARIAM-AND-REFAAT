
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
void display();
void reshape(int x,int y);
void timer(int);
void init(){

}
float z=0;
float y=0;
int main(int argc,char**argv)
{
    glutInit(&argc,argv);//initializes glut
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(1200,800);//adjust window size
    glutInitWindowPosition(200,0);//adjust window position
    glutCreateWindow("Refaat Alaa20102156        Mariam gamal20102499");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(200,timer,0);
    glutMainLoop();//loops itself again and again
    init();

    glutMainLoop();
};

void display()
{


    glClearColor(0,0.7,1,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_TRIANGLES);//home ceiling
    glColor3f(0.91,0.76,0.65);
    glVertex2f(-10,-3);
    glVertex2f(0,-3);
    glVertex2f(-5,0);
    glEnd();
    glBegin(GL_QUADS);//home it self
    glColor3f(0.52,0.37,0.26);
    glVertex2f(-10,-8);
    glVertex2f(-10,-3);
    glVertex2f(0,-3);
    glVertex2f(0,-8);
    glEnd();
    glBegin(GL_QUADS);//Road
    glColor3f(0.328412,0.329412,0.329412);
    glVertex2f(-20,-10);
    glVertex2f(-20,-8);
    glVertex2f(20,-8);
    glVertex2f(20,-10);
    glEnd();
    glBegin(GL_QUADS);//door
    glColor3f(1,1,1);
    glVertex2f(-6.5,-8);
    glVertex2f(-6.5,-5);
    glVertex2f(-4,-5);
    glVertex2f(-4,-8);
    glEnd();
    glBegin(GL_QUADS);//White strips in road mid
    glColor3f(1,1,1);
    glVertex2f(-5,-8.5);
    glVertex2f(-5,-9);
    glVertex2f(5,-9);
    glVertex2f(5,-8.5);
    glEnd();
    glBegin(GL_QUADS);//left white strip
    glColor3f(1,1,1);
    glVertex2f(-20,-8.5);
    glVertex2f(-20,-9);
    glVertex2f(-10,-9);
    glVertex2f(-10,-8.5);
    glEnd();
    glBegin(GL_QUADS);//Right strip
    glColor3f(1,1,1);
    glVertex2f(10,-8.5);
    glVertex2f(10,-9);
    glVertex2f(20,-9);
    glVertex2f(20,-8.5);
    glEnd();
    glBegin(GL_QUADS);//House window
    glColor3f(1,1,1);
    glVertex2f(-3,-4);
    glVertex2f(-3,-6);
    glVertex2f(-1,-6);
    glVertex2f(-1,-4);
    glEnd();
    glClearColor(0,0,0,1);
    glBegin(GL_QUADS);//left Tree trunk
    glColor3f(0.52,0.37,0.26);
    glVertex2d(-11,-4);
    glVertex2d(-11,-8);
    glVertex2d(-12,-8);
    glVertex2d(-12,-4);
    glEnd();
    glBegin(GL_TRIANGLES);//left tree leaf
    glColor3f(0,1,0);
    glVertex2f(-11.5,0);
    glVertex2f(-14,-4);
    glVertex2f(-9,-4);
    glEnd();
    glBegin(GL_QUADS);//Right tree trunk
    glColor3f(0.52,0.37,0.26);
    glVertex2d(1,-4);
    glVertex2d(1,-8);
    glVertex2d(2,-8);
    glVertex2d(2,-4);
    glEnd();
    glBegin(GL_TRIANGLES);//Right tree leaf
    glColor3f(0,1,0);
    glVertex2f(1.5,0);
    glVertex2f(-1.5,-4);
    glVertex2f(4.5,-4);
    glEnd();
    int i;//Sun
   double PI=3.141592;
   GLfloat x= 17.2f;
   GLfloat y= 8.1f;
   GLfloat radius= 1.6f;
   int triangleAmount=360;
   GLfloat twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.8,0.498039,0.196078);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= 6.1f ;//Clouds
    y= 7.9f;
    radius= 0.65f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);//grey
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();
    x= 5.0f;
    y= 7.9f;
    radius= 0.65f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= 5.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= 6.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= 4.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -1.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -2.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -3.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -3.0f;
    y= 7.8f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -2.0f;
    y= 7.8f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -9.0f;
    y= 7.8f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -10.0f;
    y= 7.8f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -10.5f;
    y= 8.2f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -9.5f;
    y= 8.5f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= -8.5f;
    y= 8.4f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.752941,0.752941,0.752941);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();
    glBegin(GL_QUADS);//car
    glColor3f(0.556863,0.137255,0.137255);
    glVertex2f(10+z,-7);//Car rectangle
    glVertex2f(10+z,-5.6);
    glVertex2f(15+z,-5.6);
    glVertex2f(15+z,-7);
    glEnd();

    x= z+ 13.8f;//Right wheel
    y= -7.3f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,0);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= z+11.2f;//left wheel
    y= -7.3f;
    radius= 0.7f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,0);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    x= z+12.6f;//Car circle
    y= -5.5f;
    radius= 1.3f;
    twicePi=2.0*PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.556863,0.137255,0.137255);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++){
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                   y+(radius*sin(i*twicePi/triangleAmount)));
    }
    glEnd();

    glBegin(GL_QUADS);//fan base
    glVertex2f(14,-8);
    glVertex2f(16,-8);
    glVertex2f(16,0);
    glVertex2f(14,0);
    glEnd();

    glLoadIdentity();
    glRotatef(5,0,0,1);//fan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(15,-1);
    glVertex2f(16,-1.5);
    glVertex2f(20,2);
    glVertex2f(18,3.5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(15,-1);
    glVertex2f(14,-1.5);
    glVertex2f(10,1.5);
    glVertex2f(12,3.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(13.7,-5.3);
    glVertex2f(14.3,-1.5);
    glVertex2f(15.7,-1.5);
    glVertex2f(16.3,-5.3);
    glEnd();
    glPopMatrix();









    glutSwapBuffers();

}

void reshape(int w, int h){
glViewport(0,0,(GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-20,20,-10,10);
glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{ glutPostRedisplay();
  glutTimerFunc(1000/60,timer,0);
  z-=0.3;
}
