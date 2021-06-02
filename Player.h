#include <iostream>
#include "Dice.h"
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <stdbool.h>
#include <ctime>


using namespace std;

class Player:public Dice{
private: 
int turno, jugador, casilla, ncasillas;
string TipodeCasilla;

public:
    Player();
    
    void setTurno(int);
    void setJugador(int);
    void setCasilla(int);
    void setTipodeCasilla(string);
    void setNcasillas(int);
    void Play();
    int lanzarDado();
    int getTurno();
    int getCasilla();
    int getJugador();
    int getNcasillas();
    string getTipodeCasilla();

};