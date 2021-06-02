Arturo Alfaro Gonzalez
Rodrigo Aldahir Rosete Flores
German Wong del Toro
———— Instrucciones del serpientes y escaleras ————
1. Descarga los códigos
2. Inicia el código 
3. Selecciona el modo de Juego 
	3.1 El modo de juego 1 es manual
		3.1.1 Inicia el juego con “C”
		3.1.2 Es necesario poner los caracteres en mayúsculas
		3.1.3 Solo acepta los caracteres “C” y “E”
		3.1.4 Cuando quieras terminar el juego presiona “E”
	3.2 El modo de juego 2 es automático y te genera un .txt
		3.2.1 Con “C” agregas Rondas
		3.2.2 Puedes agregar el número de turnos que desees 
		3.2.3 Es necesario poner los caracteres en mayúsculas
		3.2.4 Solo acepta los caracteres “C” y “E”
		3.2.5 Cuando quieras terminar el juego presiona “E”
		3.2.6 Cuando termines la secuencia se te arrojará un .TXT y 
		      el juego correrá con tus valores
	3.3 El modo de juego 3 es automático y lee un .txt que da la persona
		3.3.1 Al inicio se introduce el nombre del documento .txt que queremos 
		      llamar
		3.3.2 El .txt tiene que tener los valores ""C" o "E" y tienen que estar 
		      separados por renglones
		3.3.3 Las "C" son para turnos y "E" es para terminar el juego
		3.3.4
4. Simbología de cada letra: R-Ronda, J-Jugador, C-Casilla inicial, D-Dado, P-Tipo de casilla (N-Normal, S-Serpiente-3 y L-Escalera+3) y CA-Casilla actual.
-------------Discusion---------------
En el código se crearon tres formas en el que el jugador puede interactuar con el juego, siendo el primero; en donde se va jugando por turnos, en el segundo; la persona pone la cantidad de rondas que quiere que se juegue y al final se le crea un archivo .txt donde se muestra las diferentes instrucciones que el dio y en el ultimo modo; se le pide al usuario que brinde el nombre de un archivo .txt para que se puede inicializar el juego. Dentro del código se crearon dos clases Player.h y MyGame.h, y cuenta con tres cpp, dos correspondientes a los .h y el main en el se empiezan los temas códigos. Cada clase cuanta con sus respectivos constructores y métodos para el almacenamiento de los datos. Para el juego se usaron tres librerías sin incluir la de iostream, las cuales nos ayudaran a desempeñar ciertas metodologías, las librería usadas fueron stdlib.h,time.h y fstream. 

