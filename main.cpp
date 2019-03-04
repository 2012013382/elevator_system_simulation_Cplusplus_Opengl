#include<iostream>
#include<Windows.h>
#include<glut.h>
#include"Run.h"
#include"TimeStateChange.h"
using namespace std;

int main(int argc,char **argv)
{
	InitFloors();
	glutInit(& argc,argv);
    InitGraph();
	
return 0;
}


