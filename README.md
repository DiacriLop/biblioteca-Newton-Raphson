#**Creacion de Biblioteca para asignatura de Analisis Numerico y Arquitectura de computadores**


-Paso 1: Creacion de los Directorios JNINEwtonRaphson y libjniNewtonRaphson
## Creacion e instalacion de la Biblioteca (libjniNewtonRaphson).
-Paso 2: Creacion del codigo Java que va a representar la biblioteca  dentro de: /libjniNewtonRaphson  NombreArchivo:JavaNewtonRaphson.java
-Paso 3:Generar el Archivo .h mediante el comando javac JavaNewtonRaphson.java -h .(Archivo de Cabecera)
-Paso 4:Duplicar el Archivo de cabecera mediante el comando: cp  libjniNewtonRaphson_JavaNewtonRaphson.h  libjniNewtonRaphson_JavaNewtonRaphson.c
-Paso 5: Editar el Archivo libjniNewtonRaphson_JavaNewtonRaphson.c  mediante el comando: nano libjniNewtonRaphson_JavaNewtonRaphson.c 
-Paso 6:Compilar mediante el comando:  gcc -shared libjniNewtonRaphson.o libjniNewtonRaphson.so  pero con la ruta: gcc -c -fPIC libjniNewtonRaphson_JavaNewtonRaphson.c -I/usr/lib/jvm/java-1.17.0-openjdk-amd64/include -I/usr/lib/jvm/java-1.17.0-openjdk-amd64/include/linux -o libjniNewtonRaphson.o
-Paso 7: Compilar para generar la Biblioteca con el comando:gcc -shared libjniNewtonRaphson.o libjniNewtonRaphson.so   donde se genera la biblioteca
-Paso 8:Instalar Biblioteca
   *sudo cp libjniNewtonRaphson.so /usr/lib  
   *sudo cp libjniNewtonRaphson_JavaNewtonRaphson.h /usr/include
   *sudo ldconfig
## Trabajo en el Proyecto Java (JNINEwtonRaphson).
