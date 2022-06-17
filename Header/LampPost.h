static int light = 1;

void lampPostTail(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0)
{
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 30.0 + left, ly + up );
    glVertex2f(lx + 30.0 + left, ly + 200.0 + up);
    glVertex2f(lx + left, ly + 200.0 + up);
    glEnd();
}

void lampPostBody(float lx = 0.0,  float ly = 0.0, float left = 0.0, float up = 0.0)
{
    glColor3f(0.698, 0.698, 0.698);
    glBegin(GL_POLYGON);
    glVertex2f(lx + left, ly + up );
    glVertex2f(lx + 80.0 + left, ly + up );
    glVertex2f(lx + 80.0 + left, ly + 160.0 + up);
    glVertex2f(lx + left, ly + 160.0 + up);
    glEnd();
}

void lampPost()
{
    float lx = 1345.0;
    float ly = 210.0;
    float left = 0.0;
    float up = 0.0;

    lampPostTail(lx, ly);
    lampPostBody(lx - 25.0, ly + 200.0);

    if(light == 0)
    {
        glColor3f(1.0, 0.0, 0.0);
        circle(20, 20, lx + 16.0 + left, ly + 330.0 + up);
    }
    else
    {
        glColor3f(0.0, 0.0, 0.0);
        circle(20, 20, lx + 16.0 + left, ly + 330.0 + up);
    }


    glColor3f(1.0, 1.0, 0.0);
    circle(20, 20, lx + 16.0 + left, ly + 280.0 + up);

    if(light == 1)
    {
        glColor3f(0.0, 1.0, 0.0);
        circle(20, 20, lx + 16.0 + left, ly + 230.0 + up);
    }
    else
    {
        glColor3f(0.0, 0.0, 0.0);
        circle(20, 20, lx + 16.0 + left, ly + 230.0 + up);
    }

}
