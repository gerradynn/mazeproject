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
	ifstream inFile ("maze file.txt");
	cout <<val;
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
  ifstream fin;                   // Initialise filestream object.
  char c;
  int a;
  
  fin.open("maze file.txt", ios::in);
  
  if(fin.fail())                 //Check for failure
  {
    cout << "Error: Unable to locate the maze";
    exit(1);
  }
  
  fin.get(c);                    // Get first character for kicks.
   
  while(!fin.fail() && !fin.eof())  //Check for failure and end of file
  {
    cout << c;
    fin.get(c);                 //grabs next display
  }
  
  fin.close();                  //Closing open streams
  return 0;
}

//This is the end of the program