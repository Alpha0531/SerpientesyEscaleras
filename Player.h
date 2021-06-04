#include <iostream>
#include "Dice.h"
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <stdbool.h>
#include <ctime>
#include"SnakeyLader.h"


using namespace std;

class Player:public Dice{
private: 
int turno, jugador, casilla, ncasillas, nturnos;

string TipodeCasilla;

public:
    Player();
    
    void setNturnos(int);
    void setTurno(int);
    void setJugador(int);
    void setCasilla(int);
    void setTipodeCasilla(string);
    void setNcasillas(int);
    void Play(int[], int[],int, int, int, int);
    int lanzarDado();
    int getTurno();
    int getCasilla();
    int getJugador();
    int getNcasillas();
    int getNturnos();
    string getTipodeCasilla();

};