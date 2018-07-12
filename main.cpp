//
//  main.cpp
//  GameRoughDraft
//
//  Created by Rachel Montoya on 7/5/18.
//  Copyright © 2018 Rachel Montoya. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string Name;
    int HighScore;
    int ScoreBet;
    int CauseOfDeath;
    int CloudsPresent;
};

void PlayerCreation(){
    int NumberOfPlayers = 0;
    
    cout << "How many players in this game?" << endl;
    cin >> NumberOfPlayers;
    
    Player Player[NumberOfPlayers];
    
    for(int i = 0; i < NumberOfPlayers; i++) {
        cout << "What is Player " << i + 1 << "'s name?" << endl;
        cin >> Player[i].Name;
        
        cout << "What is your score bet?" << endl;
        cin >> Player[i].ScoreBet;
        
        cout << "1 for Big Cactus, 2 for Small Cactus, or 3 for Bird?" << endl;
        cin >> Player[i].CauseOfDeath;
        
        cout << "Number of clouds?" << endl;
        cin >> Player[i].CloudsPresent;
        
    }
}


int main() {
    PlayerCreation();
    
    return 0;
}