#include "Player.h"

Player::Player(){
    int turno=0, jugador=1, casilla=1, ncasillas=30;
    string TipodeCasilla = "N";
}




//Setters
void Player::setTurno(int Turno){
   this -> turno=Turno;
}

void Player::setJugador(int Jugador){
    this -> jugador = Jugador;
}

void Player::setCasilla(int Casilla){
    this -> casilla = Casilla;
}

void Player::setTipodeCasilla(string tipodecasilla){
    this -> TipodeCasilla = tipodecasilla;
}

void Player::setNcasillas(int ncasillas){
     this -> ncasillas = ncasillas;
}
//Getters
int Player::getTurno(){
    return turno;
}

int Player::getNcasillas(){
    return ncasillas;
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
int Player::lanzarDado(){
int num;
int caras = 6;

num = (rand()%caras+1);


return num;  
}


//Metodo de Jugada
void Player::Play(){
    int temp, temp2, roll;
    temp2 = getTurno();
    setTurno(getTurno()+1);
    temp = getCasilla();
    //Dado
    roll = lanzarDado();
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
     if (getCasilla()>=getNcasillas()){
            cout<<"Congratulations Player "<< getJugador() <<"! You won!"<<endl;
            cout<<"--GAME OVER--"<<endl;
            cout<<"   Result: "<<endl;
            setCasilla(getNcasillas());
        
        }
    cout<< "|" << "R" << "|" << "J" << "|" <<"C" <<"|" <<"D" <<"|" <<"P"<< "|" <<"CA"<< "|" <<endl;
    cout<<"|"<<temp2<<"|"<<getJugador()<<"|"<<temp<<"|"<<roll<<"|"<<getTipodeCasilla()<<"|"<<getCasilla()<<"|"<<endl;
    
}