//Ingresar varios números positivos hasta ingresar el -1, realice una función. 

#include<stdio.h>


void ingreso();

void valores();




void ingreso(){
	int n;
	int i;
	int cont=0;
	printf("\n\nIngrese numeros y para finalizar ingrese (-1)\n\n");
	do{
	scanf("%d",&n);
	}while(n!=-1);	

	for (i=1;i<n;i++){
		if(n>=cont){
			cont++;
		
		}
		
	}
	printf ("Los cantidad de digitos ingresados son: %d\n\n",n);
}

void valores(){
	int n,i;
	int j;
	int aux;
	
	int vc[10];
	
		for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			if (vc[j]<vc[j+1]){
				aux=vc[j];
				vc[j]=vc[j+1];
				vc[j+1]=aux;
			}
		}
	}
		
	printf ("Ingrese los valores de este arreglo,recuerde que el programa reconocera solo valores de 3 cifras\n");
		
	
	for (i=0;i<10;i++){
		i+1;
		scanf("%d",&n);
	}
	
	printf ("\nLos valores del vector son:\n\n");

	for (i=0;i<10;i++){
		printf("%d ",vc[i]);
	}

	printf ("\nLos valores ordenados del vector son: \n\n");
	for (i=0;i<10;i++){
		printf("%d ",vc[i]);
	}
}
int main(){
	
	arreglos();
	return 0;
}
void arreglos(){
	ingreso();
	valores();
	
	return 0;
}
