void skyBackground(int day)
{
    if(day)
        glColor3f(0.0, 0.898, 0.898);
    else
        glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex2f(0.0, 662.0);
    glVertex2f(1440.0, 662.0);
    glVertex2f(1440.0, 1024.0);
    glVertex2f(0.0, 1024.0);
    glEnd();
}

void greenGrashBackground(int day)
{
    if(day)
        glColor3f(0.0, 0.898, 0.0);
    else
        glColor3f(0.0, 0.3019, 0.0);

    glBegin(GL_POLYGON);
    glVertex2f(0.0, 300.0);
    glVertex2f(1440.0, 300.0);
    glVertex2f(1440.0, 662.0);
    glVertex2f(0.0, 662.0);
    glEnd();
}
