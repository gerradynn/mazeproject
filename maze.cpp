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


using namespace std;

char passAlong[24][81];

int Display (char=passAlong[24][81])
{
	int i,j;
	char passAlong[24][81];

	
	for(i=0;i<24;i++){
		for(j=0;j<81;j++)
			cout<<passAlong[i][j];
	cout<< "Choose a direction to travel \n";
	cout<< "w for UP \n a for LEFT\n s for DOWN \n d for RIGHT \n";
	}
	
	return (passAlong[24][81]);
}

/*int Game ();
{
	
}

int playerInput ();
{
	
}
*/
int main ()
{
	int i,j;
	char gameMap [24][81], c;
	ifstream fin;                   // Initialise filestream object.
  
	fin.open("maze file.txt", ios::in);
  
	if(fin.fail())                 //Check for failure
	{
		cout << "Error: Unable to locate the maze";
		exit(1);
	}
  
	fin.get(c);                    // Get first character
   
	while(!fin.fail() && !fin.eof())  //Check for failure and end of file//
	{
		for(i=0;i<24;i++){
			for(j=0;j<81;j++){
				gameMap[i][j]=c;
				fin.get(c);
			}
		}
	}
	passAlong[24][81]=Display(gameMap[24][81]);
	
	fin.close();                  //Closing open streams
	return 0;
}

//This is the end of the program


/* Test coding here*/