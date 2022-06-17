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
#include "./Header/Background.h"


int planeVisible = 0, day = 1;

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    gluOrtho2D(0.0,1440.0,0.0,1024.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //From Background.h file
    skyBackground(day);
    greenGrashBackground(day);

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
    printf("************************************Farm Land***********************************\n");
    printf("********************************************************************************\n");
    printf("********************************************************************************\n");
    printf("\n");
    printf("Team Members\n");
    printf("Name: MD. Tasluf Morshed & ID: 191-15-12089\n");
    printf("Name: MD. Assadujjaman Tilok & ID: 191-15-12594\n");
    printf("\n");
    printf("Instructions\n");
    printf("\n");
    printf("1. Press 't' to run the car\n");
    printf("2. Press 'r' for red signal in the trafic light\n");
    printf("3. Press 'g' for green signal in the trafic light\n");
    printf("4. Press 'd' for day view\n");
    printf("5. Press 'n' for night view\n");
    printf("6. Press 'KEY_UP' to move the car into up direction\n");
    printf("7. Press 'KEY_DOWN' to move the car into down direction\n");
    printf("8. Press 'MOUSE_RIGHT_BUTTON' to view the Main menu\n");
    printf("\n");
    printf("Press enter to start");
    char input;
    scanf("%c", &input);

    if(input)
    {
        glutInit(&argc,argv);
        glutInitDisplayMode ( GLUT_RGB | GLUT_SINGLE  );
        glutInitWindowPosition(0,0);
        glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH),glutGet(GLUT_SCREEN_HEIGHT));
        glutCreateWindow("Farm Land");
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
    }
    else
    {
        exit(1);
    }


    return 0;
}






