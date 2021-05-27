#include "MyGame.h"

MyGame::MyGame(){
    string juego="C";
}

//Leer Archivo:
void MyGame::Read(){
Player p1,p2;
    p1.setJugador(1);
    p1.setCasilla(1);
    p1.setTipodeCasilla("N");
    p1.setTurno(1);

    p2.setJugador(2);
    p2.setCasilla(1);
    p2.setTipodeCasilla("N");
    p2.setTurno(1);

    char notebook[99][99]; 
    ifstream fp("escayserpye.txt");
for (int i = 0; i < 20; i++) //NO IMPORTA EL LARGO DE LA LECTURA
    {
        fp >> notebook[0][i]; // LE ASIGNAS LOS VALORES DE FP A LA MATRIZ
    }


while (juego != "E" ){
    srand(time(NULL));
    for (int a = 0; a < 20; a++){
        juego = notebook[0][a];
        if (juego == "C")
        {             
            p1.Play();
            if (p1.getCasilla() >= 30)
            {
            juego = "E";
            break;
            }
            
            p2.Play();
            if (p2.getCasilla() >= 30)
            {
            juego = "E";
            break;
            }

            
            
        }
        
        else if (juego == "E")
        {            
            cout << "--GAME OVER--" << endl;   
            break; 
        }
    }
    
}


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

void MyGame::Start2(){
    ofstream file; 
    file.open("escayserpye.txt", ios::out); 
    if(file.fail()){
        cout << "No se pudo leer" << endl; 
        exit(1);
    } 
char texto = 'C';
    while(texto == 'C'){
        cin>>texto;
        file<<texto<<endl;
    }
     
    file.close(); 
Read();
}