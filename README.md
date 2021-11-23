# cc-Game2021
cc-Game2021

Funcion de CLI
Abreviacion en el ingles de (Command-line interface), es lo que permite una interacion del usuario al programa, es lo que le da instrucciones u ordenes por medio de líneas de código de alto nivel usando la consola de comandos. Se puede emplear de 2 formas escribiendo en entradas de texto o bien abriendo archivos scripts.

Funcion de Inputs
input() : Permite introducir distintos tipos de datos (int, char, float,  etc.) y al concluir los devuelve como output.
output() : Permite llevar el seguimiento de los movimientos del personaje usando las teclas del teclado.

Funcionalidad básica del rendimiento de el motor:
El rendimiento es bueno pero en ciertos casos el motor confunde ciertos archivos y se detiene, pero una vez se logre concretar la recopilación de archivos necesarios ejecuta el programa sin mas dilaciones. Se creo un sistema de acomodo de 6 carpetas.

Vscode: Archivos de control para el motor y compilador (launch, settings y task). Esta carpeta es fundamental al compilar códigos en Visual Studio Code, ya que son las que permiten ejecutarlo en dicho editor.

Assets: Carpeta de diseños de personajes, entornos, objetos, música, etc. Del entorno del juego.

Bin: Carpeta especializada en el programa con terminación “.exe” que nos permitirá ejecutar el juego en nuestro computador Windows. Adjunto a este archivo encontraremos el “.dll” de la biblioteca SFML para ejecutar la física en nuestro juego.

CLI: Archivos para ejecutar el CLI en el compilador.

Include: Todos los archivos complementarios (.hh) de la carpeta SRC, junto con las librerías SMFL y Box2D.

Src: Conjunto de clases .cc y como también extensiones de c++. Aquí se inicializa con la clase llamada main.cc, la cual nos permitirá ajustar e inicializar el programa. Se inicia en la carpeta src en el archivo main.cc y se pasa a las clases .cc que ya contienen las clases .hh, este sistema de cadena permite un código mas limpio y sin tantos problemas de saltar declarar funciones o declarar funciones innecesarias. Con esto se ejecuta el programa, termina de ejecutarse cuando se cierra la venta de sistema que está reproduciendo el código de juego. 

Universidad nacional del centro de la provincia de Buenos Aires, & Piccolo, M. (2010). IMPLEMENTACION DE VIDEOJUEGOS COMO HERRAMIENTA PARA EL DESARROLLO MOTOR Y COGNITIVO DE NIÑOS (N.o 9). https://www.ridaa.unicen.edu.ar/xmlui/bitstream/handle/123456789/589/Tesis%20Piccolo-Fabi%C3%A1n.pdf?sequence=1&isAllowed=y

Línea de comandos. (s. f.). EcuRed. Recuperado 21 de noviembre de 2021, de https://www.ecured.cu/L%C3%ADnea_de_comandos#Ejemplo