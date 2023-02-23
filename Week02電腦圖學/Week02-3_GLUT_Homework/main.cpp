#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);
    glVertex2f((26-100)/100.0, -(116-100)/100.0 );
    glVertex2f((77-100)/100.0, -(28-100)/100.0 );
    glVertex2f((104-100)/100.0, -(28-100)/100.0 );
    glVertex2f((154-100)/100.0, -(108-100)/100.0 );
    glVertex2f((129-100)/100.0, -(108-100)/100.0 );
    glVertex2f((90-100)/100.0, -(48-100)/100.0 );
    glVertex2f((47-100)/100.0, -(144-100)/100.0 );
    glVertex2f((156-100)/100.0, -(177-100)/100.0 );
    ///glVertex2f((128-100)/100.0, -(108-100)/100.0 );
    glEnd();

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glutMainLoop();
}

