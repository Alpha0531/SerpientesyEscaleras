Arturo Alfaro Gonzalez
Rodrigo Aldahir Rosete Flores
German Wong del Toro
———— Instrucciones del serpientes y escaleras ————
1. Descarga los códigos
2. Inicia el código 
3. Selecciona el modo de Juego 
	3.1 El modo de juego 1 es manual
          	3.1.1 Se debe colocar un número entero de acuerdo con la
                      cantidad de casillas con las que se quiera jugar
                3.1.2 Se debe colocar un número entero de acuerdo con la
		      cantidad de número de turnos con los que se quiere jugar  
                3.1.3 Se debe colocar un número entero de acuerdo con la 
                      cantidad de jugadores que van a jugar 
                3.1.4 Se debe colocar un número entero de acuerdo con la 
                      cantidad de serpientes con las que se quiera jugar  
                3.1.5 Se debe colocar un número entero de acuerdo con la 
                      cantidad de escaleras con las que se quiera jugar 
                3.1.6 Se debe colocar un número entero de acuerdo con la cantidad de 
                      casillas que retrocederán en caso de caer en una serpiente
                3.1.7 Se debe colocar un número entero de acuerdo con la cantidas de 
                      casillas que avanzaran en caso de caer en una escalera
                3.1.8 Inicia el juego con “C”
		3.1.9 Es necesario poner los caracteres en mayúsculas
		3.1.10 Solo acepta los caracteres “C” y “E”
		3.1.11 Cuando quieras terminar el juego presiona “E”

	3.2 El modo de juego 2 es automático y te genera un .txt
                3.2.1 Con “C” agregas Rondas
		3.2.2 Puedes agregar el número de rondas que desees 
		3.2.3 Es necesario poner los caracteres en mayúsculas
		3.2.4 Solo acepta los caracteres “C” y “E”
		3.2.5 Cuando quieras terminar el juego presiona “E”
		3.2.6 Cuando termines la secuencia se te arrojará un .TXT y 
		      el juego correrá con tus valores
                3.2.7 Se debe colocar un número entero de acuerdo con la
                      cantidad de casillas con las que se quiera jugar 
                3.2.8 Se debe colocar un número entero de acuerdo con la 
                      cantidad de jugadores que van a jugar 
                3.2.9 Se debe colocar un número entero de acuerdo con la 
                      cantidad de serpientes con las que se quiera jugar  
                3.2.10 Se debe colocar un número entero de acuerdo con la 
                      cantidad de escaleras con las que se quiera jugar 
                3.2.11 Se debe colocar un número entero de acuerdo con la cantidad de 
                      casillas que retrocederán en caso de caer en una serpiente
                3.2.12 Se debe colocar un número entero de acuerdo con la cantidad de 
                      casillas que avanzaran en caso de caer en una escalera
                3.2.13 Una vez colocado todos los datos, se jugará con las condiciones y 
                      caracterisiticas que hayas puesto.

	3.3 El modo de juego 3 es automático y lee un .txt que da la persona
		3.3.1 Al inicio se introduce el nombre del documento .txt que queremos 
		      llamar
		3.3.2 El .txt tiene que tener los valores ""C" o "E" y tienen que estar 
		      separados por renglones
		3.3.3 Las "C" son para turnos y "E" es para terminar el juego
	        3.3.4 Se debe colocar un número entero de acuerdo con la
                      cantidad de casillas con las que se quiera jugar 
                3.3.5 Se debe colocar un número entero de acuerdo con la 
                      cantidad de jugadores que van a jugar 
                3.3.6 Se debe colocar un número entero de acuerdo con la 
                      cantidad de serpientes con las que se quiera jugar  
                3.3.7 Se debe colocar un número entero de acuerdo con la 
                      cantidad de escaleras con las que se quiera jugar 
                3.3.8 Se debe colocar un número entero de acuerdo con la cantidad de 
                      casillas que retrocederán en caso de caer en una serpiente
                3.3.9 Se debe colocar un número entero de acuerdo con la cantidad de 
                      casillas que avanzaran en caso de caer en una escalera
                3.3.10 Una vez colocado todos los datos, se jugará con las condiciones y 
                      caracterísiticas que hayas puesto.


4. Simbología de cada letra: R-Ronda, J-Jugador, C-Casilla inicial, D-Dado, P-Tipo de casilla (N-Normal, S-Serpiente-3 y L-Escalera+3) y CA-Casilla actual.
5. Debajo del tablero aparecera el lugar en donde se ubican las casillas de las serpientes y las escaleras que haya puesto el usuario.
-------------Discusion---------------
En el código se crearon tres formas en el que el jugador puede interactuar con el juego, siendo el primero; en donde se va jugando por rondas, 
en el segundo; la persona pone la cantidad de rondas que quiere que se juegue y al final se le crea un archivo .txt donde se muestra las diferentes instrucciones que el dio y en el ultimo modo;
 se le pide al usuario que brinde el nombre de un archivo .txt para que se puede inicializar el juego.
 Dentro del código se crearon dos clases Player.h y MyGame.h, y cuenta con tres cpp, dos correspondientes a los .h y el main en el se empiezan los temas códigos. Cada clase cuanta con sus respectivos 
constructores y métodos para el almacenamiento de los datos. Para el juego se usaron tres librerías sin incluir la de iostream, las cuales nos ayudaran a desempeñar ciertas metodologías, las librería 
usadas fueron stdlib.h,time.h y fstream. 

