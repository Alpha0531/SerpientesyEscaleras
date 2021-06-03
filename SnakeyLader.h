#include <iostream>
#include "Dice.h"
using namespace std;

class SnakeyLader:public Dice{

    private:
    int nSnak, nEsc, Rew, Pen;
    int serC[50];
    int EscC[50];


    public:
    SnakeyLader();
    SnakeyLader(int, int,int,int);

    int getNSnak();
    int getNEsc();
    int getRew();
    int getPen();
    int lanzarDado(int);

    void setNSnack(int);
    void setNEsc(int);

    
    


};