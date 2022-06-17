static float	tx	=  0.0;
static float	ty	=  0.0;

void circle(float rx, float ry, float cx, float cy){


    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i=0; i<=1000; i++){
        float angle = 2 * 3.1416f * i/1000;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }

    glEnd();
}

void sun(int day){
    if(day)
    glColor3f(1.0, 0.898, 0.0);
    else
    glColor3f(1.0, 1.0, 1.0);

    circle(50, 50, 180, 920);
}

void cloud(float cx = 0.0, float cy = 0.0){
    float rx = 35.0;
    float ry = 35.0;

    glColor3f(1.0, 1.0, 1.0);
    circle(rx, ry, cx, cy);
    circle(rx, ry, cx+40, cy+30);
    circle(rx, ry, cx+90, cy+30);
    circle(rx, ry, cx+40, cy-20);
    circle(rx, ry, cx+90, cy-20);
    circle(rx, ry, cx+130, cy);
}

void cloudGoLeft(){
    tx += 0.1;
    if (tx > 1000.0){
        tx = -1400.0;
    }

    glutPostRedisplay();
}


void cloudBackground()
{
    float cx = 400.0;
    float cy = 930.0;

    glPushMatrix();
    glTranslatef(tx,ty,0);
    cloud(cx, cy);
    cloud(cx + 300.0, cy - 30.0);
    cloud(cx + 550.0, cy);
    cloud(cx + 900.0, cy - 15.0);
    glPopMatrix();

    cloudGoLeft();

}

