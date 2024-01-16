//creacion de un codigo en C que mediante el uso de la función strlen y la libreria string.h 
//nos ayude a reconocer el numero de letras que se ingresan por palabras

#include<stdio.h>//aqui incluimos una libreria que nos permita la entrar y devolucion de datos
#include<string.h>//aqui incluimos una libreria que nos permita la comparacion y el uso de funciones con cadenas de caracteres

int main(){//vamos a inicializar en nuestra funcion principal

char cad[20]; //declaramos nuestra cadena de caracteres con una dimension de 20 en el espacio de memoria 
int x; //declaramos esta varable auxiliar que nos permitira almacenar para luego mostrar por pantalla el numero de letras 


printf("Ingrese su nombre o una frase: \n"); //en este apartado pedimos al usuario que ingrese una frase o su propio nombre
scanf("%s",cad); //usamos el scanf para almacenar los datos en nuestra cadena de caracteres 
//gets(cad);

x= strlen(cad);//mediante la funcion strlen que nos permite determinar la logitud de la cadema de caracteres
//indicamos que queremos conocer la longitud o cantidad de caracteres y ese resultado lo almacenamos en nuestra variable auxiliar
printf ("\nEl numero de letras que se ingresaron son: %d",x);//mostramos por patalla el numero o longitud de caracteres que se ingresaron 

return 0;
} //finalizamos nuestra funcion principal 

//creacion del codigo anteriormente presentado con funciones

/*
#include<stdio.h>
#include<string.h>
void numerodecaracteres();


int main(){

numerodecaracteres();

return 0;
}

void numerodecaracteres(){
	char cad[20];
	int x;


printf("Ingrese su nombre: \n");
scanf("%s",cad);

	x= strlen(cad);

printf ("\nEl numero de letras que se ingresaron son: %d",x);	
}
*/
