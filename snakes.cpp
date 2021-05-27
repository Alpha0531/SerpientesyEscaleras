#include <iostream>
#include "MyGame.h"



using namespace std;



int main(){

MyGame x;
int mode;
cout<<"Mode 1 = Manual"<<endl;
cout<<"Mode 2 = Automatic"<<endl;
cout<<"Select game mode: "<<endl;
cin>>mode;
if (mode == 1){
    x.Start();
}
else if (mode == 2){
    x.Start2();
}
else{
    cout<<"Not valid"<<endl;
}

return 0;
}