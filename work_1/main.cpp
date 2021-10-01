#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>
#include <math.h>
void display(void){
glClearColor(1.0, 1.0, 1.0, 1.0); //set background color
glClear(GL_COLOR_BUFFER_BIT); //setup background
//glColor3f(1.0, 0.0, 1.0);//set foreground color
    for(int i = 1; i < 150; i++){
        double r = 0.006*i;
        glColor3f(r, 1, 1-r);//set foreground color
        glBegin(GL_TRIANGLES); //start defining a triangle
        glVertex2f(0.0f, 0.0f); //coordinate of the 1st vertex
        glVertex2f(0.5*(100-i)/50*cos(2*3.14/100*i), 0.5*i/50*sin(2*3.14/100*i)); //coordinate of the 2nd vertex
        glVertex2f(0.5*(100-i)/50*cos(2*3.14/100*(i+1)),0.5*i/50*sin(2*3.14/100*(i+1))); //coordinate of the 3rd vertex
        glEnd(); 　　　　　　　　//end defining a triangle
        glFlush(); //flush the drawing information
           
    }
}
int main(int argc, char ** argv)
{
 // insert code here...
 //std::cout << “Hello, World!\n”;
glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE);
 glutInitWindowSize(500, 500);
 glutCreateWindow("Hello openGL");
 glutDisplayFunc(display);
 glutMainLoop();
return 0;
}
