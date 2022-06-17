
void horseLeg(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 17.0 + left, ly + up );
    glVertex2f(lx + 17.0 + left, ly + 50.0 + up);
    glVertex2f(lx + left, ly + 50.0 + up);
    glEnd();
}

void horseBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.9255, 0.3019, 0.1216);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 97.0 + left, ly + up );
    glVertex2f(lx + 97.0 + left, ly + 50.0 + up);
    glVertex2f(lx + left, ly + 50.0 + up);
    glEnd();
}

void horseHead(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.9255, 0.3019, 0.1216);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 30.0 + left, ly + up );
    glVertex2f(lx + left, ly + 50.0 + up);
    glVertex2f(lx - 30.0 + left, ly + 30.0 + up);
    glVertex2f(lx - 30.0 + left, ly + 15.0 + up);
    glEnd();
}

void horseHair(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 20.0 + left, ly + up );
    glVertex2f(lx - 30.0 + left, ly + 50.0 + up);
    glEnd();
}

void horseTail(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 10.0 + left, ly - 70.0 + up );
    glVertex2f(lx + 20.0 + left, ly - 60.0 + up);
    glEnd();
}

void horseMouth(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 5.0 + left, ly + up );
    glVertex2f(lx + 5.0 + left, ly + 15.0 + up);
    glVertex2f(lx + left, ly + 15.0 + up);
    glEnd();
}

void singleHorse(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    horseLeg(lx, ly, left, up);
    horseLeg(lx + 80, ly, left, up);
    horseBody(lx, ly+50, left, up);
    horseHead(lx, ly+100, left, up);
    glColor3f(0.0, 0.0, 0.0);
    circle(3.0, 3.0, lx - 8.0 + left, ly + 130.0 + up);
    horseHair(lx + 30, ly + 100, left, up);
    horseTail(lx + 97, ly+ 100, left, up);
    horseMouth(lx - 35.0, ly + 115.0, left, up);
}



void horse(){
    float lx = 375.0;
    float ly = 425.0;
    float left = 0.0;
    float up = 0.0;

    singleHorse(lx - 150, ly, left, up);
    singleHorse(lx + 720, ly - 30, left, up);
    singleHorse(lx + 480, ly + 10, left, up);
    singleHorse(lx + 200, ly - 25, left, up);

}
