void singleFench(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.647, 0.1647, 0.1647);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 26.0 + left, ly + up );
    glVertex2f(lx + 26.0 + left, ly + 110.0 + up);
    glVertex2f(lx + 13.0 + left, ly + 135.0 + up);
    glVertex2f(lx + left, ly + 110.0 + up);
    glEnd();

}

void fenchVirticalLineLeft(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.647, 0.1647, 0.1647);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 600.0 + left, ly + up );
    glVertex2f(lx + 600.0 + left, ly + 20.0 + up);
    glVertex2f(lx + left, ly + 20.0 + up);
    glEnd();
}


void fenchVirticalLineRight(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.647, 0.1647, 0.1647);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 700.0 + left, ly + up );
    glVertex2f(lx + 700.0 + left, ly + 20.0 + up);
    glVertex2f(lx + left, ly + 20.0 + up);
    glEnd();
}

void Fenches(){
    float ly = 270.0;

    for(int i = 30; i <= 570; i = i + 65){
    singleFench(i, ly);
    }

    fenchVirticalLineLeft(0.0, ly + 20.0);
    fenchVirticalLineLeft(0.0, ly + 80.0);

    for(int i = 1380; i >= 780; i = i - 65){
    singleFench(i, ly);
    }

    fenchVirticalLineRight(770.0, ly + 20.0);
    fenchVirticalLineRight(770.0, ly + 80.0);

}
