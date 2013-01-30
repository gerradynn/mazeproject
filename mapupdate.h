#include <iostream>
#include "movecounter.h"

using namespace std;

//template for the swap function used throughout the program
template <typename>
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	
	return;
}

class mapUpdate
{
	private:
		char input;								//using players input, will move the player on the map
		char mapSTATIC [24][81];				//mapSTATIC is a static backup of the game map.
		char key;								//used by the game to find the player position
		char buildSTATIC;						//called to build the backup map
		char buildDYNAMIC;						//called by mapUpdate to store the DYNAMIC map
		int search;								//called to find the player position
		int posX, posY;							//placeholders for the player position
		int moveX, moveY;						//map location player wants to move to, checked in mechanics.h
		int path								//in class designation for the player input, passed in from main or controls
		
	public:
		char mapDYNAMIC [24][81];				//this is the map the game will manipulate,
												//it can be restored using mapSTATIC
		mapUpdate();
	
};

	
mapUpdate::mapUpdate(int direction)
{
	path=direction;
	key='X';
}

int mapUpdate::buildSTATIC (char map [24][81]) //builds initial iteration of the game map for in program storage
{
	int i, j;
	for(i=0;i<24;i++){
		for(j=0;j<81;j++){
			mapSTATIC[i][j]=map [i][j];
		}
	}
	return;
}

void mapUpdate::buildDYNAMIC (char map [24][81]) //does the same process as buildSTATIC, but is actively used by the game
{
	int i, j;
	for(i=0;i<24;i++){
		for(j=0;j<81;j++){
			mapDYNAMIC[i][j]=map [i][j];
		}
	}
	return;
}

void mapUpdate::search
{
	int i, j;
	//key = 'X';
	for(i=0;i<24;i++){
		for(j=0;j<81;j++){
			if(key=mapDYNAMIC[i][j]){
				posX=i;
				posY=j;
			}
		}
	}
}

void mapUpdate::input
{
	if (openSpace==true){
		swap (mapDYNAMIC[posX][posY], mapDYNAMIC[moveX][moveY]);
		return;
	}
	else cout<<"Move not allowed, please try another move...";
	return;
}