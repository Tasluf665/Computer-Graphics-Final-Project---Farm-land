#ifdef _WIN32
#include<windows.h>
#endif

#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

#include "./Header/Tree.h"
#include "./Header/CustomeCircle.h"
#include "./Header/House.h"
#include "./Header/WindTarbine.h"
#include "./Header/Fenches.h"
#include "./Header/Road.h"
#include "./Header/LampPost.h"
#include "./Header/Car.h"
#include "./Header/Plane.h"
#include "./Header/Star.h"
#include "./Header/Grash.h"
#include "./Header/Horse.h"

int planeVisible = 0, day = 1;

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    gluOrtho2D(0.0,1440.0,0.0,1024.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void skyBackground()
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

void greenGrashBackground()
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


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //All Background
    skyBackground();
    greenGrashBackground();

    //From Grash.h file
    greenGrash();

    //From Road.h file
    road();

    //From CustomeCircle.h file
    sun(day);
    if(day)
        cloudBackground();
    if(!day)
        star();

    //From Plane.h file
    if(planeVisible)
    {
        plane();
    }

    //From Tree.h file
    treeBackground();

    //From House.h file
    bigHouse();
    smallHouse();

    //From WindTarbine.h file
    windTarbine();

    //From Horse.h file
    horse();

    //From Fenches.h file
    Fenches();

    //From LampPost.h file
    lampPost();

    //From Car.h file
    Car();

    glFlush();
    //glutSwapBuffers();
}



void my_keyboard(unsigned char key,int x, int y)//In main(), To register a callback to the keyboard function,
{

    switch (key)
    {
    case 't': //To run the car
        if(light == 1)
        {
#ifdef _WIN32
            PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Car.wav", NULL, SND_ASYNC|SND_FILENAME);
#endif
            glutIdleFunc(carGoLeft); //carGoLeft this function is in the Car.h file
        }
        else
        {
            glutIdleFunc(NULL);
        }
        break;
    case 'r': //For the red signal
#ifdef _WIN32
        PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Button.wav", NULL, SND_ASYNC|SND_FILENAME);
#endif
        light = 0;
        glutIdleFunc(checkCarPosition); //If red signal is on the this function will check the current car position then it will stop the car if it is on the signal;
        break; //checkCarPosition this function is in the Car.h file

    case 'g': //For the green signal
#ifdef _WIN32
        PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Button2.wav", NULL, SND_ASYNC|SND_FILENAME);
#endif
        light = 1;
        glutIdleFunc(carGoLeft); //carGoLeft this function is in the Car.h file
        break;

    case 'd':
#ifdef _WIN32
        PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Day.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
#endif
        day = 1;
        break;

    case 'n':
#ifdef _WIN32
        PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Night.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
#endif
        day = 0;
        break;
    default:
        break;
    }
}

void spe_key(int key, int x, int y) // glutSpecialFunc sets the special keyboard callback for the current window
{

    switch (key)
    {

    case GLUT_KEY_UP:
        if(carTy <= 124.0)
        {
            carTy += 2.0;
            glutPostRedisplay();
        }
        break;

    case GLUT_KEY_DOWN:
        if(carTy >= -24.0)
        {
            carTy -= 2.0;
            glutPostRedisplay();
        }
        break;

    default:
        break;
    }
}

void main_menu(int index)
{
    switch(index)
    {
    case 1:
#ifdef _WIN32
        PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Airplane.wav", NULL, SND_ASYNC|SND_FILENAME);
#endif
        planeTx = 0.0;
        planeTy = 0.0;
        planeVisible = 1;
        glutIdleFunc(planeGoRight);
        break;

    case 2:
        starTx = 0.0;
        starTy = 0.0;
        glutIdleFunc(starGoLeft);
        break;
    }
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_SINGLE  );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH),glutGet(GLUT_SCREEN_HEIGHT));
    glutCreateWindow("Final Project");
    init();
    glutDisplayFunc(Draw);
#ifdef _WIN32
    PlaySound("C:\\Users\\rhyme\\OneDrive\\Documents\\C\\Final Project\\Sound\\Day.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
#endif
    glutKeyboardFunc(my_keyboard);
    glutSpecialFunc(spe_key);

    glutCreateMenu(main_menu);
    glutAddMenuEntry("Aeroplane",1);
    glutAddMenuEntry("Star Fall",2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glutMainLoop();
    return 0;
}







