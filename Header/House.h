void bigHouseBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.647, 0.1647, 0.1647);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 284.0 + left, ly + up );
    glVertex2f(lx + 284.0 + left, ly + 160.0 + up);
    glVertex2f(lx + left, ly + 160.0 + up);
    glEnd();
}

void bigHouseRoof(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.5568, 0.4196, 0.13725);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 338.0 + left, ly + up );
    glVertex2f(lx + 300.0 + left, ly + 45.0 + up);
    glVertex2f(lx + 38.0 + left, ly + 45.0 + up);
    glEnd();
}

void bigHouseWindowBackground(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0)
{
    glColor3f(0.847, 0.847, 0.749);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 69.0 + left, ly + up );
    glVertex2f(lx + 69.0 + left, ly + 110.0 + up);
    glVertex2f(lx + 59.0 + left, ly + 125.0 + up);
    glVertex2f(lx + 10.0 + left, ly + 125.0 + up);
    glVertex2f(lx + left, ly + 110.0 + up);
    glEnd();
}

void bigHouseWindow(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0)
{
    glColor3f(0.196, 0.6, 0.8);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 41.0 + left, ly + up );
    glVertex2f(lx + 41.0 + left, ly + 40.0 + up);
    glVertex2f(lx + left, ly + 40.0 + up);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(lx + 21.0  + left, ly + up );
    glVertex2f(lx + 21.0 + left, ly + 40.0 + up );

    glVertex2f(lx + left, ly + 20.0 + up );
    glVertex2f(lx + 41.0 + left, ly + 20.0 + up );
    glEnd();
}

void bigHouseDoor(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.3294, 0.3294, 0.3294);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 46.0 + left, ly + up );
    glVertex2f(lx + 46.0 + left, ly + 90.0 + up);
    glVertex2f(lx + left, ly + 90.0 + up);
    glEnd();
}

void bigHouse()
{
    float lx = 150.0;
    float ly = 600.0;
    float left = -20.0;
    float up = 0.0;

    bigHouseBody(lx, ly, left, up);
    bigHouseRoof(lx-25.0, ly + 160.0, left, up);
    bigHouseWindowBackground(lx + 15.0, ly, left, up);
    bigHouseWindowBackground(lx+108.0, ly, left, up);
    bigHouseWindowBackground(lx + 200.0, ly, left, up);
    bigHouseWindow(lx + 29.0, ly + 40.0, left, up);
    bigHouseWindow(lx + 215.0,ly + 40.0, left, up);
    bigHouseDoor(lx + 120.0, ly, left, up);
}

void smallHouseBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.89, 0.61568, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 211.0 + left, ly + up );
    glVertex2f(lx + 211.0 + left, ly + 160.0 + up);
    glVertex2f(lx + left, ly + 160.0 + up);
    glEnd();
}

void smallHouseRoof(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.5568, 0.4196, 0.13725);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 251.0 + left, ly + up );
    glVertex2f(lx + 213.0 + left, ly + 45.0 + up);
    glVertex2f(lx + 38.0 + left, ly + 45.0 + up);
    glEnd();
}

void smallHouseDoor(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0){
    glColor3f(0.8784, 0.8549, 0.8431);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 79.0 + left, ly + up );
    glVertex2f(lx + 79.0 + left, ly + 110.0 + up);
    glVertex2f(lx + left, ly + 110.0 + up);
    glEnd();
}

void smallHouse(){
    float lx = 745.0;
    float ly = 580.0;
    float left = 0.0;
    float up = 0.0;

    smallHouseBody(lx, ly, left, up);
    smallHouseRoof(lx - 20.0, ly + 160.0, left, up);
    smallHouseDoor(lx + 65.0, ly, left, up);
}
