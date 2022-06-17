static GLfloat spin =20.0;


void windTarbineBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.8509, 0.8509, 0.8509);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 106.0 + left, ly + up );
    glVertex2f(lx + 58.0 + left, ly + 200.0 + up);
    glVertex2f(lx + 48.0 + left, ly + 200.0 + up);
    glEnd();
}

void windTarbineFan(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    //Yellow part
    glColor3f(0.949, 0.9176, 0.1529);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 126.0 + left, ly + 100.0 + up );
    glVertex2f(lx + 126.0 + left, ly + 5.0 + 100.0 + up);
    glVertex2f(lx + left, ly + 5.0 + up);
    glEnd();

    glColor3f(0.545, 0.1255, 0.1255);
    glBegin(GL_TRIANGLES);
    glVertex2f(lx + left, ly + up);
    glVertex2f(lx + 126.0 + left, ly + 60.0 + up);
    glVertex2f(lx + 126.0 + left, ly + 100.0 + up);
    glEnd();

}

void windTarbineFanRotation(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){

    glPushMatrix();
    glTranslatef(lx + left, ly + up, 0.0);
    glRotatef(spin, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx + left), -(ly + up), 0.0);
    windTarbineFan(lx + left, ly + up);
    glPopMatrix();
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(lx + left, ly + up, 0.0);
    glRotatef(spin - 75.0, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx + left), -(ly + up), 0.0);
    windTarbineFan(lx + left, ly + up);
    glPopMatrix();
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(lx + left, ly + up, 0.0);
    glRotatef(spin - 175.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx + left), -(ly + up), 0.0);
    windTarbineFan(lx + left, ly + up);
    glPopMatrix();
    glutPostRedisplay();

    glPushMatrix();
    glTranslatef(lx + left, ly + up, 0.0);
    glRotatef(spin - 260.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx + left), -(ly + up), 0.0);
    windTarbineFan(lx + left, ly + up);
    glPopMatrix();
    glutPostRedisplay();

}


void spinDisplay_left(void)
{
    spin = spin + 0.2;

    glutPostRedisplay();
}

void windTarbine()
{

    float lx = 1209.0;
    float ly = 560.0;
    float left = -40.0;
    float up = -10.0;

    windTarbineBody(lx, ly, left, up);

    glColor3f(0.3294, 0.3294, 0.3294);
    circle(10, 10, lx + 53.0 + left, ly + 200.0 + up);
    windTarbineFanRotation(lx+53.0, ly+200.0, left, up);

    spinDisplay_left();
}
