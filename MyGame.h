#include <iostream>
#include"Player.h"
using namespace std;

//#define PLAYERS 2

class MyGame 
{
    string juego;
    string doc;
    Player *jugadores[10];
    //Player* jugadores[PLAYERS];

public:
    MyGame();
    void PrintTablero();
    void Start();
    void Start2();
    void Read(string);
    void Start3();

};