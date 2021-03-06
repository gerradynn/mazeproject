//***************************************************//
//This is a prelimnary take on a maze program        //
//Designed by Shawn Noble. This program is           //
//of my own design, please do not copy               //
//or redistribute without permission                 //
//***************************************************//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "movecounter.h"	//maintains move count, important to some functions
#include "mapupdate.h"		//maintains map database for the maze
#include "mechanics.h"		//maintains games rules and standards
#include "controls.h"		//controls and recieves user input to the game
#include "display.h"		//controls visual output

using namespace std;

	int count=0; //declared here to make it easier to access

int main ()
{
	int i,j;
	char direction='s';
	char gameMap [24][81], c;
	
	ifstream fin;                   // Initialise filestream object.
  
	fin.open("maze_file.txt", ios::in);
  
	if(fin.fail())                 //Check for failure
	{
		cout << "Error: Unable to locate the maze";
		exit(1);
	}
  
	fin.get(c);                    // Get first character
   
	while(!fin.fail() && !fin.eof())  //Check for failure and end of file
	{
		for(i=0;i<24;i++){
			for(j=0;j<81;j++){
				gameMap[i][j]=c;
				fin.get(c);
			}
		}
	}
	Display (gameMap);
	
	cin>>direction;
	
	if (count<1){
		buildSTATIC(gameMap);
		count++;
	else buildDYNAMIC
	
	fin.close();                  //Closing open streams
	return 0;
}

//This is the end of the program


/* Test coding here*/