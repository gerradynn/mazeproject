void Display (char displayOut[24][81])
{
	int i=0, j=0;
	//char passAlong[24][81];

	
	for(i=0;i<24;i++){
		for(j=0;j<81;j++)
			cout<<displayOut[i][j];
	}
	cout<< "Choose a direction to travel \n";
	cout<< "w for UP \na for LEFT\ns for DOWN \nd for RIGHT \n";
	
}

