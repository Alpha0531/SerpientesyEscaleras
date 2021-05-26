#include <iostream>
#include"Player.h"
using namespace std;

class MyGame : public Player 
{
    string juego;

public:
    MyGame();
    void PrintTablero();
    void Start();
    

};