#include <iostream>
#include "MyGame.h"


using namespace std;



int main(){

MyGame x;
Player p1 ;
Player p2 ;
//cout<<x.LanzarDado()<<endl;

p1.setJugador(1);
p1.setCasilla(1);
p1.setTipodeCasilla("N");
p1.setTurno(1);

p2.setJugador(2);
p2.setCasilla(1);
p2.setTipodeCasilla("N");
p2.setTurno(1);

p1.Play();
p1.Play();
p1.Play();
p1.Play();

return 0;
}