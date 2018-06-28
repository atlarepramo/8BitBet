#include <iostream>
using namespace std;


class Player //created class that will define the attributes for each player that is in the game. 
{
	public:
		string name; //Players name
		int HighScore; //score player gets after playing their round of the game. Not used here until we actual have a workable game.
		int ScoreBet;
		int CauseOfDeath;
		int CloudsPresent;
		void PlayerCreation(); //function below that i cant get to work properly when it is outside of int main(). Get compliation errors
};

//Function called for creating player. Define name and all betting parameters made by player. 
//Noted out here because can't get it to iterate through properly when it is a callable function.
//But I was able to get it to work properly when i embedded the function in the int main(). 
//It's definitely something that I'm doing wrong so if you can get that working properly that would be cool. 

//Player PlayerCreation(int i) 
//	{	
		

	//	cout << i << endl;

	//	cout << "What is this Player's name?" << endl;
	//	cin >> Player[i].name;

	//	cout << "What is your score bet?" << endl;
	//	cin >> Player[i].ScoreBet;

//		cout << "1 for Big Cactus, 2 for Small Cactus, or 3 for Bird?" << endl;
//		cin >> Player[i].CauseOfDeath;

//		cout << "How many clouds?" << endl;
//		cin >> Player[i].CloudsPresent;	
	//	cout << "Player" << Player[i].name << "initilzation is compelte" << endl;
//		return Player[i];
//	}

int NumberOfPlayers;

int main()
{
	int i = 0;

	Player Player[i];

	cout<< "How many players in this game?" <<endl;
	cin >> NumberOfPlayers;


	while (i < NumberOfPlayers) //not tied to this while loop but it seems to get the job done for dynamically allowing however many players we want to enter the game. 
	{							//But for logistic reasons we may cap it at 4 duing actual implementation. 
		cout << "What is this Player's name?" << endl; //writes to attribute in class Player as the rest of these cin's do. 
		cin >> Player[i].name;

	//	if (i == NumberOfPlayers-1) {   	 Used for debugging. Compiles correctly but for some reason after i = 3, 
	//	cout <<Player[i].name<<endl;    	 Player[i].name isn't getting written too correctly. This outputs as "???" for i > 3. And works normally for all values smaller 

	//	};


		cout << "What is your score bet?" << endl; //betting parameter. Integer value for obvious reasons
		cin >> Player[i].ScoreBet;

		cout << "1 for Big Cactus, 2 for Small Cactus, or 3 for Bird?" << endl; //Betting parameter. Was unsure whether or not to make this an integer, string, or some other object. 
		cin >> Player[i].CauseOfDeath;											//Arbitrarily picked int for consistency. Think i might change it to array down the line. 

		cout << "How many clouds?" << endl; //betting parameter. Again all these are arbitrary just
		cin >> Player[i].CloudsPresent;		//working off the game we already created
	
		
		//cout << i << endl;				These lines used for debugging and ensuring iteration 
		//cout <<Player[i].name<<endl;		sequence working properly

		i = i + 1;	
		
	}; 



}