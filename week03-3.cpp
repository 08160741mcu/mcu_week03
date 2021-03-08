#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(5.0f,   5.0f);
    glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(2.0f,  0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(-2.0f, -2.0f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(0.0f,   0.1f);
    glColor3f(0.0f, 0.0f, 0.0f);   glVertex2f(2.0f,  0.0f);
    glColor3f(0.0f, 0.0f, 0.0f);   glVertex2f(-1.0f, -2.0f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 1.0f, 1.0f);   glVertex2f(-0.2f,   0.5f);
    glColor3f(1.0f, 1.0f, 0.0f);   glVertex2f(5.0f,  -5.0f);
    glColor3f(0.0f, 1.0f, 1.0f);   glVertex2f(0.0f, -2.0f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);   glVertex2f(0.2f,   -0.5f);
    glColor3f(0.0f, 0.0f, 0.0f);   glVertex2f(-5.0f,  5.0f);
    glColor3f(0.0f, 0.0f, 0.0f);   glVertex2f(0.0f, 2.0f);

    glEnd();

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//Glut��l��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);//��ܵ{��

    glutCreateWindow("08160741");//�}GLUT����
    glutDisplayFunc(display);//��ܪ��禡
    glutMainLoop();//GLUT�D�n���j��
}
