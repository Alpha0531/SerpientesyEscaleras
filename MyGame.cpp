#include "MyGame.h"

MyGame::MyGame(){
    string juego="C";
    string doc = "Serp&Laders.txt";
}

//Leer Archivo:
void MyGame::Read(string doc){
int numJugadores, numCasillas, nSnak, nEsc, Rew, Pen;
cout<<"Ingrese Numero de Casillas: "<<endl;
cin>>numCasillas;
cout<<"Ingrese Numero de Jugadores: "<<endl;
cin>>numJugadores;
cout<<"Ingrese Numero de Serpientes en el tablero: "<<endl;
cin>>nSnak;
cout<<"Ingrese Numero de Escaleras en el tablero"<<endl;
cin>>nEsc;
cout<<"Ingrese numero de avance de escalera: "<<endl;
cin>>Rew;
cout<<"Ingrese numero de retroceso de serpiente:  "<<endl;
cin>>Pen;
int serC[nSnak], EscC[nEsc];
srand(time(NULL));
    SnakeyLader SyL=SnakeyLader(nSnak, nEsc, Rew, Pen);
    for(int i=0; i<SyL.getNSnak(); i++){
        serC[i]=SyL.lanzarDado(numCasillas);
    }
    for(int i=0; i<SyL.getNEsc(); i++){
        EscC[i]=SyL.lanzarDado(numCasillas);
    }
    for(int i=0; i<SyL.getNSnak();i++){
        if(serC[i]==serC[i-1]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }
        for(int a=0; a<SyL.getNEsc(); a++){
            if(EscC[a]==EscC[a-1]){
                EscC[i]=SyL.lanzarDado(numCasillas);
            }
            if(serC[i]==EscC[a]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }
            if(serC[i]==EscC[a]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }

        }
    }

for (int i = 0; i < numJugadores; i++){
    jugadores[i] = new Player();
    jugadores[i]->setCasilla(1);
    jugadores[i]->setTurno(1);
    jugadores[i]->setJugador(i+1);
    jugadores[i]->setNcasillas(numCasillas); 
    
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
            jugadores[contador]->Play(serC,EscC,nSnak, nEsc, Rew, Pen);
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
int numJugadores, numCasillas, nSnak, nEsc, Rew, Pen;
cout<<"Ingrese Numero de Casillas: "<<endl;
cin>>numCasillas;
cout<<"Ingrese Numero de Jugadores: "<<endl;
cin>>numJugadores;
cout<<"Ingrese Numero de Serpientes en el tablero: "<<endl;
cin>>nSnak;
cout<<"Ingrese Numero de Escaleras en el tablero"<<endl;
cin>>nEsc;
cout<<"Ingrese numero de avance de escalera: "<<endl;
cin>>Rew;
cout<<"Ingrese numero de retroceso de serpiente:  "<<endl;
cin>>Pen;
int serC[nSnak], EscC[nEsc];
srand(time(NULL));
    SnakeyLader SyL=SnakeyLader(nSnak, nEsc, Rew, Pen);
    for(int i=0; i<SyL.getNSnak(); i++){
        serC[i]=SyL.lanzarDado(numCasillas);
    }
    for(int i=0; i<SyL.getNEsc(); i++){
        EscC[i]=SyL.lanzarDado(numCasillas);
    }
    for(int i=0; i<SyL.getNSnak();i++){
        if(serC[i]==serC[i-1]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }
        for(int a=0; a<SyL.getNEsc(); a++){
            if(EscC[a]==EscC[a-1]){
                EscC[i]=SyL.lanzarDado(numCasillas);
            }
            if(serC[i]==EscC[a]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }
            if(serC[i]==EscC[a]){
                serC[i]=SyL.lanzarDado(numCasillas);
            }

        }
    }
    
   

for (int i = 0; i < numJugadores; i++){
    jugadores[i] = new Player();
    jugadores[i]->setCasilla(1);
    jugadores[i]->setTurno(1);
    jugadores[i]->setJugador(i+1);
    jugadores[i]->setNcasillas(numCasillas); 
    
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
    
    while (juego == "C")
    {
        
        
        for(int j=0; j<numJugadores; j++){
        srand(time(NULL));
        jugadores[j]->Play(serC,EscC,nSnak, nEsc, Rew, Pen);
        

        
        //Limite Casilla
        if (jugadores[j]->getCasilla() >= jugadores[j]->getNcasillas()){
            juego="Adios";
            break;
        }
        cin>>juego;

        while (juego !="C"&& juego !="E"){
            cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl;

            cin>>juego;

        }
        if (juego== "E"){
            cout<<"--GAME OVER--"<<endl;
            juego="Adios";
            break;
        }
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