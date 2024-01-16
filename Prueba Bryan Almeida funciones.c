//realizar un  menu donde se ingresen almenos 5 funciones observadas en clases 

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void f1();
void f2();
void f3();
void f4();
void f5();


int main(){
	int op;
do{	
	printf ("\n\npresione 1 para usar la funcion strlen\n");
	printf ("\npresione 2 para usar la funcion issuper\n");
	printf ("\npresion 3 para usar la funcion atoi\n");
	printf ("\npresione 4 para usar la funcion strchr\n");
	printf ("\npresione 5 para usar a funcion tolower\n");
	printf ("\npresione 0 para salir del programa\n\n");
	scanf("%d",&op);


	
switch (op){
	
	case 1:
		printf("Usted ha elegido la funcion strlen\n");
		f1();
		break;
	case 2:
		printf("Usted ha elegido la funcion issupe\n ");
		f2();
		break;
	case 3:
		printf("Usted ha elegido la funcion atoi\n");
		f3();
		break;
	case 4:
		printf("Usted ha elegido la funcion strchr\n");
		f4();
		break;
	case 5:
		printf("Usted ha elegido la funcion tolower\n");
		f5();
		break;
		
}
}while(op!=0);	
	
	return 0;
}






void f1(){
	char cad[20]; 
	int x;  

printf("Ingrese su nombre o una frase: \n"); 
scanf("%s",cad); 
x= strlen(cad);
printf ("\nEl numero de letras que se ingresaron son: %d",x);
	
}


void f2(){
	    char cadena[100];  // Se reserva espacio para la cadena ingresada
    int i; // variable para el for

    printf("Ingrese una cadena: ");
    scanf("%s", cadena);  // Se lee la cadena ingresada por el usuario

    for(i = 0; cadena[i]; i++) //se verifica si el carácter en la posición i de la cadena cadena es diferente del carácter nulo
        printf("%c, %d\n", cadena[i], isupper(cadena[i]));
	
}






void f3(){
	char cadenas[5][100]; // Matriz para almacenar las cadenas ingresadas por el usuario
    int numeros[5]; // Vector para almacenar los números ingresados por el usuario
    int i, indice;
    printf("Programa para ingresar 5 cadenas de texto\n");
    printf("y convertirlas a enteros para hacer operaciones con ellas\n");

    // Solicita al usuario que ingrese 5 cadenas de números
    for ( i = 0; i < 5; i++) {
        printf("Ingrese la cadena %d de numeros: ", i + 1);
        scanf("%s", cadenas[i]); // Lee una cadena y la almacena en cadenas[i]

        printf("Ingrese un numero: ");
        scanf("%d", & numeros[i]); // Lee un número y lo almacena en numeros[i]
    }

    // Menú de opciones
    int opcion;
    do {
        printf("\nMenu:\n");
        printf("1. Sumar un numero a una cadena\n");
        printf("2. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion); // Lee la opción seleccionada por el usuario

        switch (opcion) {
            case 1:
            
                printf("Ingrese el indice de la cadena (0-4): ");
                scanf("%d", & indice); // Lee el índice de cadena a procesar

                if (indice >= 0 && indice < 5) {
                    int suma = atoi(cadenas[indice]) + numeros[indice]; // atoio conviete la cadena a entero para luego sumarlo
                    printf("La suma es: %d\n", suma);
                } else {
                    printf("indice no valido.\n");
                }
                break;
            case -1:
                printf("Saliste del programaaaaa\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    } while (opcion != -1); // El programa se repetirá hasta que ingreses el valor -1, el programa finalizará

	
}



void f4(){
	    char str[100];
    printf("Ingresa una cadena: ");
    gets(str);


    char *ptr = strchr(str, 'm'); //uso de la funcion strchr

    if (ptr != NULL) {
        printf("Encontrado: %s\n", ptr);
    } else {
        printf("Caracter 'm' no encontrado en la cadena.\n");
    }
	
}




void f5(){
	 char nom[100];
    char minus[100]; 
    int i;

    printf("Ingrese su nombre: ");
    scanf("%[^\n]", nom); 


    for (i = 0; nom[i] != '\0'; i++) {
        minus[i] = tolower(nom[i]);
    }
    minus[i] = '\0'; 

    printf("Nombre original: %s\n", nom);
    printf("Nombre en minúsculas: %s\n", minus);
	
}
