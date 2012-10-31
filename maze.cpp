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

/*int Display ();
{
	
	
}

int Game ();
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
				c=gameMap[i][j];
				fin.get(c);
			}
		}
	}
	
	for(i=0;i<24;i++){
		for(j=0;j<81;j++)
			cout<<gameMap[i][j];
		cout<< '\n';
	}
	fin.close();                  //Closing open streams
	return 0;
}

//This is the end of the program


/* Test coding here
 * ifstream fin;
 * 
 * char ** gameMap *[n]
 * 	for (int i = 0, i < n, i++)
 * 		secArray [i] = new char [map(i)];*/