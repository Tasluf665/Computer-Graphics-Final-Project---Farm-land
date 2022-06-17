void treeTell(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.898, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 30.0 + left, ly + up );
    glVertex2f(lx + 30.0 + left, ly + 115.0 + up );
    glVertex2f(lx + left, ly + 115.0 + up );
    glEnd();
}

void treeBodyBig( float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.0, 0.5019, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 139.0 + left, ly + up );
    glVertex2f(((lx+lx+139.0)/2) + left, ly + 80.0 + up );
    glEnd();

}

void treeBodyMedium(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.0, 0.5019, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 113.0 + left, ly + up );
    glVertex2f(((lx+lx+113.0)/2) + left, ly + 80.0 + up );
    glEnd();

}

void treeBodySamll(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0 )
{
    glColor3f(0.0, 0.5019, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 90.0 + left, ly + up );
    glVertex2f(((lx+lx+90.0)/2) + left, ly+ 65 + up );
    glEnd();

}

void treeBody(float lx = 0.0,  float ly = 0.0){
    treeBodyBig(lx, ly);
    treeBodyMedium(lx+13.0, ly+45.0);
    treeBodySamll(lx+25.0, ly+95.0);
}

void singleTree(float lx = 0.0,  float ly = 0.0)
{
    treeTell(lx, ly);
    treeBody(lx - 54.0, ly + 85.0);
}

void treeBackground()
{
    float treeArray[20][2] =
    {
        {50.0, 600.0},
        {150.0, 600.0},
        {360.0, 600.0},
        {560.0, 570.0},
        {700.0, 580.0},
        {860.0, 590.0},
        {1000.0, 600.0},
        {1100.0, 580.0},
        {1270.0, 600.0},
        {1350.0, 560.0},
    };

    for(int i = 0; i < 10; i++)
    {
        singleTree(treeArray[i][0], treeArray[i][1]);
    }
}
