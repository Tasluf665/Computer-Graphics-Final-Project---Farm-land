void roadBackGround()
{
    glColor3f(0.85, 0.85, 0.85);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(1440.0, 0.0);
    glVertex2f(1440.0, 300.0);
    glVertex2f(0.0, 300.0);
    glEnd();
}

void roadWhiteBackground(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx, ly);
    glVertex2f(lx + 160, ly);
    glVertex2f(lx + 160, ly + 25.0);
    glVertex2f(lx, ly + 25.0);
    glEnd();
}

void roadBlackBackGround(){
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(1440.0, 0.0);
    glVertex2f(1440.0, 210.0);
    glVertex2f(0.0, 210.0);
    glEnd();
}

void road(){
    roadBackGround();
    roadBlackBackGround();

    for(int i = 20; i <= 1500; i = i + 280){

    roadWhiteBackground(i, 90.0);
    }
}
