static float	planeTx	=  0.0;
static float	planeTy	=  0.0;

void planeBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
glColor3f(0.849, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 90.0 + left, ly + up );
    glVertex2f(lx + 90.0 + left, ly + 25.0 + up);
    glVertex2f(lx + 25.0 + left, ly + 25.0 + up);
    glEnd();
}

void planeTail(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + 70.0 + left, ly + up );
    glVertex2f(lx + 100.0 + left, ly + up );
    glVertex2f(lx + 120.0 + left, ly + 55.0 + up);
    glVertex2f(lx + 110.0 + left, ly + 55.0 + up);
    glEnd();
}

void planeUpTriangle(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
glColor3f(0.849, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + 60.0 + left, ly + 25.0 + up );
    glVertex2f(lx + 88.0 + left, ly + 25.0 + up );
    glVertex2f(lx + 110.0 + left, ly + 55.0 + up);
    glEnd();
}

void planeGoRight(){
    planeTx -= 0.3;

    if (planeTx < -800.0){
        planeTx = 0.0;
    }

    planeTy += 0.1;


    glutPostRedisplay();
}


void plane(){
    float lx = 1150.0;
    float ly = 800.0;
    float left = 0.0;
    float up = 0.0;

    glPushMatrix();
    glTranslatef(planeTx,planeTy,0);
    planeBody(lx, ly, left, up);
    planeTail(lx, ly, left, up);
    planeUpTriangle(lx, ly, left, up);
    glPopMatrix();

}
