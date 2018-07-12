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

int PlayerCreation(vector<Player>& container){
    int NumberOfPlayers = 0;
    
    cout << "How many players in this game?" << endl;
    cin >> NumberOfPlayers;
    
    Player Player[NumberOfPlayers];
    
    for(int i = 0; i < NumberOfPlayers; i++) {

        cout << "What is Player " << i + 1 << "'s name?" << endl;
        cin >> Player[i].Name;
        
        cout << "What is Player" << i + 1 << "'s high score?" <<endl;   
        cin >> Player[i].HighScore;

        cout << "What is your score bet?" << endl;
        cin >> Player[i].ScoreBet;
        
        cout << "1 for Big Cactus, 2 for Small Cactus, or 3 for Bird?" << endl;
        cin >> Player[i].CauseOfDeath;
        
        cout << "Number of clouds?" << endl;
        cin >> Player[i].CloudsPresent;
        
    }

    for(int y = 0; y < NumberOfPlayers; y++) {
        container.push_back(Player[y]);
    }

    return NumberOfPlayers;
}

int main() {

    vector <Player> GameAnalysis;

    int NumberofPlayers = PlayerCreation(GameAnalysis);
    

    return 0;
}