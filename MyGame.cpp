#include "MyGame.h"

MyGame::MyGame(){
    string juego="C";
    string doc = "Serp&Laders.txt";
}

//Leer Archivo:
void MyGame::Read(string doc){
int numJugadores;
cout<<"Ingrese Numero de Jugadores: "<<endl;
cin>>numJugadores;

for (int i = 0; i < numJugadores; i++){
    jugadores[i] = new Player();
    jugadores[i]->setCasilla(1);
    jugadores[i]->setTurno(1);
    jugadores[i]->setJugador(i+1);
    jugadores[i]->setNcasillas(15); 
    
}

    char notebook[99][99]; 
    ifstream fp("Serp&Laders.txt");
for (int i = 0; i < 20; i++) 
    {
        fp >> notebook[0][i]; 
    }

int contador = 0;
while (juego != "E" ){
    srand(time(NULL));
    for (int a = 0; a < 20; a++){
        juego = notebook[0][a];
        if (juego == "C")
        {             
            jugadores[contador]->Play();
            cout<<"--------------"<<endl;
            if (jugadores[contador]->getCasilla() >= jugadores[contador]->getNcasillas())
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
        else{
            cout<<"Invalid character "<<endl;
            cout<<"--------------"<<endl;
            juego = "E";
            break;
        }
        contador = contador+1;
       if (contador == numJugadores){
           contador=0;
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
int numJugadores;
cout<<"Ingrese Numero de Jugadores: "<<endl;
cin>>numJugadores;

for (int i = 0; i < numJugadores; i++){
    jugadores[i] = new Player();
    jugadores[i]->setCasilla(1);
    jugadores[i]->setTurno(1);
    jugadores[i]->setJugador(i+1);
    jugadores[i]->setNcasillas(15); 
    
}


    cout<<"Press C to continue next turn, or E to end the game:"<<endl;
    cin>>juego;
    while (juego !="C"&& juego !="E")
    {
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;

            cin>>juego;
            

        }
    
    if (juego== "E"){
        cout<<"--GAME OVER--"<<endl;
    }
    if (juego == "C"){
        PrintTablero();
    }
    int contador = 0;
    while (juego == "C")
    {
        
        
        srand(time(NULL));
        jugadores[contador]->Play();
        //Limite Casilla
        if (jugadores[contador]->getCasilla() >= jugadores[contador]->getNcasillas()){
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
        
        
       
        contador = contador+1;
       if (contador == numJugadores){
           contador=0;
       } 
    }

}

void MyGame::Start2(){
    ofstream file; 
    file.open("Serp&Laders.txt", ios::out); 
    if(file.fail()){
        cout << "No se pudo leer" << endl; 
        exit(1);
    } 
char texto = 'C';
    cout<<"Press C to add a turn and press E to finish the game \n";
    while(texto != 'E'){
        cin>>texto;
        file<<texto<<endl;
    }
     
    file.close(); 

PrintTablero();
string doc = "Serp&Laders.txt";
Read(doc);
}

void MyGame::Start3(){
    cout<<"Introduce the name of the file .txt "<<endl;
    string doc;
    cin>>doc;
    Read(doc);
}