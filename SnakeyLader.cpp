#include "SnakeyLader.h"

SnakeyLader::SnakeyLader(){
    nSnak=3;
    nEsc=3;
    Rew=3;
    Pen=-3;
}
SnakeyLader::SnakeyLader(int Sn, int Esc, int Rew, int Pen){
    nSnak=Sn;
    nEsc=Esc;
    this->Rew=Rew;
    this->Pen=Pen;

}
int SnakeyLader::getNSnak(){
    return nSnak;
}
int SnakeyLader::getNEsc(){
    return nEsc;
}
int SnakeyLader::getRew(){
    return Rew;
}
int SnakeyLader::getPen(){
    return Pen;
}
int SnakeyLader::lanzarDado(int caras){
    int num;
    

    num = (rand()%caras+1);
    return num;  
}

void SnakeyLader::setNSnack(int Sn){
    nSnak=Sn;
}
void SnakeyLader::setNEsc(int Esc){
    nSnak=Esc;
}