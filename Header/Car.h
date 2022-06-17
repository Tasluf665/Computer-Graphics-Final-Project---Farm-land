static float	carTx	=  0.0;
static float	carTy	=  0.0;
static float	carWheelSpin	=  0.0;

void CarBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.9725, 0.1647, 0.0549);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 320.0 + left, ly + up );
    glVertex2f(lx + 295.0 + left, ly + 65.0 + up );
    glVertex2f(lx + 230.0 + left, ly + 75.0 + up );
    glVertex2f(lx + 180.0 + left, ly + 130.0 + up);
    glVertex2f(lx + 70.0 + left, ly + 130.0 + up);
    glVertex2f(lx + 50.0 + left, ly + 75.0 + up);
    glVertex2f(lx + left, ly + 65.0 + up);
    glEnd();
}

void carWindow(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 60.0 + left, ly + up );
    glVertex2f(lx + 60.0 + left, ly + 36.0 + up);
    glVertex2f(lx + 15.0 + left, ly + 36.0 + up);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(lx + 70.0 + left, ly + up );
    glVertex2f(lx + 140.0 + left, ly + up );
    glVertex2f(lx + 115.0 + left, ly + 36.0 + up);
    glVertex2f(lx + 70.0 + left, ly + 36.0 + up);
    glEnd();
}

void carGoLeft(){
    carTx += 0.3;

    if (carTx > 1700.0){
        carTx = -600.0;
    }

    carWheelSpin -= 0.2;

    glutPostRedisplay();
}

void checkCarPosition(){
    if(carTx <= 1400){
        carGoLeft();
    }else{
        glutIdleFunc(NULL);
    }
}


void carWheelLineVertical(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 38.0 + left, ly + up );
    glVertex2f(lx + 38.0 + left, ly + 4.0 + up);
    glVertex2f(lx + left, ly + 4.0 + up);
    glEnd();
}

void carWheelLineHorizontal(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 4.0 + left, ly + up );
    glVertex2f(lx + 4.0 + left, ly + 38.0 + up);
    glVertex2f(lx + left, ly + 38.0 + up);
    glEnd();
}


void Car(){
    float lx = 330.0;
    float ly = 50.0;
    float left = -700.0;
    float up = 0.0;

    glPushMatrix();
    glTranslatef(carTx, carTy,0);
    CarBody(lx, ly, left, up);
    glColor3f(0.0, 0.0, 0.0);
    circle(25, 25, lx + 70.0 + left, ly + up);
    circle(25, 25, lx + 230.0 + left, ly + up);
    glColor3f(0.9725, 0.1647, 0.0549);
    circle(20, 20, lx + 70.0 + left, ly + up);
    circle(20, 20, lx + 230.0 + left, ly + up);
    carWindow(lx + 60.0, ly + 80.0, left, up);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(carTx, carTy,0);
        glPushMatrix();
        glTranslatef(lx + 70.0 + left , ly - 2.5 + up,0);
        glRotatef(carWheelSpin, 0.0f, 0.0f, 1.0f);
        glTranslatef(-(lx + 70.0 + left), -(ly - 2.5 + up),0);
        carWheelLineVertical(lx + 50.0, ly - 3.5, left, up);
        carWheelLineHorizontal(lx + 66.5, ly - 20.0, left, up);
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(carTx, carTy,0);
    glPushMatrix();
    glTranslatef(lx + 230.0 + left , ly - 2.5 + up,0);
    glRotatef(carWheelSpin, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(lx + 230.0 + left), -(ly - 2.5 + up),0);
    carWheelLineVertical(lx + 210.0, ly - 3.5, left, up);
    carWheelLineHorizontal(lx + 226.5, ly - 20.0, left, up);
    glPopMatrix();
    glPopMatrix();
}
