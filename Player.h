#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <stdbool.h>
#include <ctime>


using namespace std;

class Player{
private: 
int turno, jugador, casilla;
string TipodeCasilla;

public:
    Player();
    //Player(int,int,int,string);
    void setTurno(int);
    void setJugador(int);
    void setCasilla(int);
    void setTipodeCasilla(string);
    void Play();
    int LanzarDado();
    int getTurno();
    int getCasilla();
    int getJugador();
    string getTipodeCasilla();

};