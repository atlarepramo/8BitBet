//
//  main.cpp
//  GameRoughDraft
//
//  Created by Rachel Montoya & Omar Peralta on 7/12/18.
//  Copyright © 2018 Rachel Montoya & Omar Peralta. All rights reserved.
//

#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Player {
public:
    string Name;
    int HighScore;
    int ScoreBet;
    int CauseOfDeath;
    int CloudsPresent;
};

void GameCreation(int x, vector<Player>& container){
    
    Player Bets[x];
    
    cout << container[0].Name << "'s Game." << endl;  
        
    for(int i=1; i < x; i++) {
  
        cout << container[i].Name <<"'s bet's:" << endl;

        cout << "What will be " << container[0].Name << "'s score?" << endl;
        cin >> Bets[i].ScoreBet;
        
        cout << "What object will kill " << container[0].Name << " 1 for bird, 2 for big cactus, 3 for small cactus." << endl;
        cin >> Bets[i].CauseOfDeath;
            
        cout << "How many clouds will be in the foreground of " << container[0].Name << "'s game?" << endl;
        cin >> Bets[i].CloudsPresent;

        container.push_back(Bets[i]);

        cout << container[i].Name << endl;
        cout << container[i].ScoreBet << endl;
        cout << container[i].CauseOfDeath << endl;
        cout << container[i].CloudsPresent << endl;
       
    }    

}

int PlayerCreation(vector<Player>& container) {

    int NumberofPlayers = 0;
    

    cout << "How many players in this game?" << endl;
    cin >> NumberofPlayers;

     Player Names[NumberofPlayers];


    for(int i = 0; i < NumberofPlayers; i++) { //Creates n amount of player objects based on NumOfPlayers

        cout << "Who is Player " << i + 1 << "?" << endl;
        cin >> container[i].Name;

        container.push_back(Names[i]);
    }    

    return NumberofPlayers;
}

int main() {

    vector <Player> GameAnalysis;   

    int NumberOfPlayers = PlayerCreation(GameAnalysis);

    GameCreation(NumberOfPlayers, GameAnalysis);

    int i = 0;   

    return 0;
}