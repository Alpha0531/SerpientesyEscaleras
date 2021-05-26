#include "MyGame.h"

MyGame::MyGame(){
    string juego="C";
}


//Print Tablero:
void MyGame::PrintTablero(){
    cout<<"---------Tablero---------"<<endl;
    cout<<"30 --> N N N S N N \n";
    cout<<"       N N N L N N \n";
    cout<<"       N N S N N N \n";
    cout<<"       N S N N N L \n";
    cout<<"       N N N L N N <-- 1 \n";
    cout<<"-------------------------"<<endl;
}


//Método para iniciar el juego
void MyGame::Start()
{
    //Player P1 = Player(1,1,1,"N");
    //Player P2 = Player(1,2,1,"N");
Player p1,p2;
    p1.setJugador(1);
    p1.setCasilla(1);
    p1.setTipodeCasilla("N");
    p1.setTurno(1);

    p2.setJugador(2);
    p2.setCasilla(1);
    p2.setTipodeCasilla("N");
    p2.setTurno(1);
    cout<<"Press C to continue next turn, or E to end the game:"<<endl;
    cin>>juego;
    while (juego !="C"&& juego !="E"){
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;

            cin>>juego;
            

        }
    
    if (juego== "E"){
        cout<<"--GAME OVER--"<<endl;
    }
    if (juego == "C"){
        PrintTablero();
    }
    while (juego == "C")
    {
        
        p1.Play();
        //Limite Casilla
        if (p1.getCasilla() >= 30){
            break;
        }
        cin>>juego;

        while (juego !="C"&& juego !="E"){
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;

            cin>>juego;

        }
        if (juego== "E"){
            cout<<"--GAME OVER--"<<endl;
            break;
        }
        

        p2.Play();
        //Limite Casilla
        if (p2.getCasilla() >= 30){
            break;
        }
        cin>>juego;
        while (juego !="C"&& juego !="E"){
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;

            cin>>juego;
            

        }
        if (juego== "E"){
            cout<<"--GAME OVER--"<<endl;
            break;
        }
        
      
        //Limite de Turnos
        if (p2.getTurno() > 20){
            cout<<"The number of turns have been exceeded"<<endl;
            break;
        }

       
        
        
    }

}