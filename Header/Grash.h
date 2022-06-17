void singleGreenGrash(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.0, 0.5019, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 10.0 + left, ly + up );
    glVertex2f(lx + 5.0 + left, ly + 41.0 + up);
    glEnd();
}

void smallGroupGrash(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    singleGreenGrash(lx-5, ly);

    glPushMatrix();
    glTranslatef(lx, ly, 0.0);
    glRotatef(-5.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef(-lx, -ly, 0.0);
    singleGreenGrash(lx, ly);
    glPopMatrix();
    glutPostRedisplay();


    singleGreenGrash(lx+8, ly);
    singleGreenGrash(lx+14, ly);
    singleGreenGrash(lx+18, ly);

    glPushMatrix();
    glTranslatef(lx+23, ly, 0.0);
    glRotatef(2.0f, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx+23), -ly, 0.0);
    singleGreenGrash(lx+20, ly);
    glPopMatrix();
    glutPostRedisplay();

    singleGreenGrash(lx+27, ly);
    singleGreenGrash(lx+32, ly);
    singleGreenGrash(lx+36, ly);

}

void bigGroupGrash(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    smallGroupGrash(lx, ly);
    smallGroupGrash(lx + 30, ly);
    smallGroupGrash(lx + 60, ly);
    smallGroupGrash(lx + 92, ly);
}
void greenGrash(){
    float lx = 745.0;
    float ly = 480.0;
    float left = 0.0;
    float up = 0.0;

    float grashArray[12][2] = {
    {745.0, 480.0},
    {837.0, 480.0},
    {37.0, 400.0},
    {350.0, 420.0},
    {320.0, 350.0},
    {145.0, 480.0},
    {1150.0, 390.0},
    {1050.0, 520.0},
    {870.0, 430.0},
    {650.0, 370.0},
    {1250.0, 470.0},
    {570.0, 460.0},
    };

    for(int i = 0; i < 12; i++){
    bigGroupGrash(grashArray[i][0], grashArray[i][1]);
    }
}
