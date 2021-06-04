#include "Player.h"

Player::Player(){
    int nturnos = 0, turno=0, jugador=1, casilla=1, ncasillas=30;
    string TipodeCasilla = "N";
}




//Setters
void Player::setNturnos(int nturnos){
    this -> nturnos = nturnos;
}
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
int Player::getNturnos(){
    return nturnos;
}
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
void Player::Play(int serC[],int EscC[],int nSnak, int nEsc, int Rew, int Pen){
    int temp, temp2, roll;
    
    
    temp2 = getTurno();
    setTurno(getTurno()+1);
    temp = getCasilla();
    //Dado
    roll = lanzarDado();
    setCasilla(getCasilla()+roll);
    for(int i=0; i<nSnak;i++){
        if (serC[i]==getCasilla()){
            setCasilla(getCasilla()- Pen);
            setTipodeCasilla("S");
            break;

        }
         else{

        setTipodeCasilla("N");
    }
    }
    if(getTipodeCasilla()=="N"){
    for(int i=0; i<nEsc;i++){
        if (EscC[i]==getCasilla()){
            setCasilla(getCasilla()+ Rew);
            setTipodeCasilla("L");
            break;

        }
         else{
        setTipodeCasilla("N");
    }
    }
    }
     if (getCasilla()>=getNcasillas()){
            cout<<"Congratulations Player "<< getJugador() <<"! You won!"<<endl;
            cout<<"--GAME OVER--"<<endl;
            cout<<"   Result: "<<endl;
            setCasilla(getNcasillas());
        
        }
        if (getCasilla()<getNcasillas()){
        cout<<"Casillas de las serpientes"<<endl;
        for(int i=0; i<nSnak;i++){
            cout << serC[i] << "|";
        }
        cout << "" << endl;
        cout<<"--------------"<<endl;
        
            cout<<"Casillas de las escaleras"<<endl;
        for(int i=0; i<nEsc;i++){
            cout << EscC[i] << "|";
            
        }
        cout << "" << endl;
        cout<<"--------------"<<endl;
        }
    cout<< "|" << "R" << "|" << "J" << "|" <<"C" <<"|" <<"D" <<"|" <<"P"<< "|" <<"CA"<< "|" <<endl;
    cout<<"|"<<temp2<<"|"<<getJugador()<<"|"<<temp<<"|"<<roll<<"|"<<getTipodeCasilla()<<"|"<<getCasilla()<<"|"<<endl;
    
    
}