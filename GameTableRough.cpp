#include <iostream>
using namespace std;


class Player
{
	public:
		string name;
		int ScoreBet;
		int CauseOfDeath;
		int CloudsPresent;
		void PlayerCreation();
};

Player PlayerCreation(int i) //Function called for creating player. Define name and all betting parameters made by player
	{	
		Player Player[i];

		cout << "What is this Player's name?" << endl;
		cin >> Player[i].name;

		cout << "What is your score bet?";
		cin >> Player[i].ScoreBet;

		cout << "1 for Big Cactus, 2 for Small Cactus, or 3 for Bird?";
		cin >> Player[i].CauseOfDeath;

		cout << "How many clouds?";
		cin >> Player[i].CloudsPresent;	

		return new Player(Player[i]);
	}

int NumberOfPlayers;

int main()
{
	cout<< "How many players in this game?" <<endl;
	cin >> NumberOfPlayers;

	int i = 0;

	if (i != NumberOfPlayers)
	{
		PlayerCreation(i);
		i = i + 1;	
	}; 


}