#include "Player.h"

Player::Player(){
    int turno=0, jugador=1, casilla=1;
    string TipodeCasilla = "N";
}
//Constructor
//Player::Player(int Turno, int Jugador, int Casilla, string tipodecasilla){
  //  this -> turno = turno;
    //this -> jugador = jugador;
    //this -> casilla = casilla;
    //this -> TipodeCasilla = TipodeCasilla;
//}
//Setters
void Player::setTurno(int Turno){
    turno=Turno;
}

void Player::setJugador(int Jugador){
    jugador = Jugador;
}

void Player::setCasilla(int Casilla){
    casilla = Casilla;
}

void Player::setTipodeCasilla(string tipodecasilla){
    TipodeCasilla = tipodecasilla;
}

//Getters
int Player::getTurno(){
    return turno;
}

int Player::getCasilla(){
    return casilla;
}

int Player::getJugador(){
    return jugador;
}

string Player::getTipodeCasilla(){
    return TipodeCasilla;
}

//Método Lanzar Dado
int Player::LanzarDado(){
  int num;
    srand((unsigned)time(0));
    
    for(int c = 1; c <= 10; c++)
    {
        num = 1 + rand() % 6;
    }

return num;  
}

//Metodo de Jugada
void Player::Play(){
    int temp, temp2, roll;
    temp2 = getTurno();
    setTurno(getTurno()+1);
    temp = getCasilla();
    roll = LanzarDado();
    setCasilla(getCasilla()+roll);
    if (getCasilla() == 27 || getCasilla() == 16 || getCasilla() == 8)
    {
        setCasilla(getCasilla()-3);
        setTipodeCasilla("S");
    }
    else if (getCasilla() == 22 || getCasilla() == 12 || getCasilla() == 3)
    {
        setCasilla(getCasilla()+3);
        setTipodeCasilla("L");
    }
    else{
        setTipodeCasilla("N");
    }
    cout<<temp2<<getJugador()<<temp<<roll<<getTipodeCasilla()<<getCasilla()<<endl;
}