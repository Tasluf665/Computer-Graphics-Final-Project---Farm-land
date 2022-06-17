static float	starTx	=  0.0;
static float	starTy	=  0.0;

void singleStar(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0)
{

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(lx,ly);
    glVertex2f(lx - 5, ly - 8.0);
    glVertex2f(lx + 5, ly - 8.0);
    glVertex2f(lx, ly - 11.0);
    glVertex2f(lx - 5, ly - 3.0);
    glVertex2f(lx + 5, ly - 3.0);
    glEnd();
}

void starGoLeft()
{
    starTx = starTx + 0.5;

    if (starTx > 900)
    {
        starTx = 0.0;
    }

    starTy -= 0.1;

    if (starTy < -300)
    {
        starTy = 0.0;
    }

    glutPostRedisplay();
}

void starFall()
{
    glPushMatrix();
    glTranslatef(starTx,starTy,0);
    singleStar(452.0,977.0);
    singleStar(752.0,1100.0);
    singleStar(352.0,1050.0);
    glPopMatrix();
}

void star()
{
    float lx = 375.0;
    float ly = 953.0;
    float left = 0.0;
    float up = 0.0;

    float starArray[25][2] = {{1363.000000,1036.000000},
        {597.000000,865.000000},
        {413.000000,985.000000},
        {886.000000,942.000000},
        {1269.000000,871.000000},
        {422.000000,877.000000},
        {350.000000,1009.000000},
        {1583.000000,976.000000},
        {360.000000,876.000000},
        {352.000000,886.000000},
        {551.000000,818.000000},
        {1107.000000,879.000000},
        {1442.000000,980.000000},
        {1082.000000,973.000000},
        {607.000000,985.000000},
        {629.000000,852.000000},
        {1362.000000,1008.000000},
        {1529.000000,1017.000000},
        {733.000000,1006.000000},
        {1231.000000,892.000000},
        {183.000000,1036.000000},
        {177.000000,865.000000},
        {120.000000,985.000000},
        {86.000000,942.000000},
        {49.000000,871.000000},
    };




    for(int i = 0; i < 25; i++)
    {
        singleStar(starArray[i][0], starArray[i][1]);
    }

    starFall();
}
