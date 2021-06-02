#ifndef DICE_H_INCLUDED
#define DICE_H_INCLUDED

#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <stdbool.h>
#include <ctime>
using namespace std;

class Dice
{
private:
    int caras;
public:
    Dice();
    Dice(int);
    virtual int lanzarDado();


};

#endif