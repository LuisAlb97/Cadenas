//HCLA_P6
//Luis Alberto Hernandez Cozatl
//En estas dos ejercicios manejaremos dos cadenas, una en donde ingresaremos una palabra y no las convertira en lsa diferentes formas y la otra 
//segunda cadena se realizara el mismo procedimiento  pero ahora solo con funciones para cada ejercicio.
//fecha: 16/03/2020



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu (void);
void cadena_1(char *frase);
void programa2(void);

void Salida1(char *cadena);
void Salida2(char *cadena);
void Salida3(char *cadena);
void Salida4(char *cadena);
void Salida5(char *cadena);
void Salida6(char *cadena);
void Salida7(char *cadena);
void Salida8(char *cadena);
void Salida9(char *cadena);
void Salida10(char *cadena);


int main (void)
{
   menu();
   return 0;
}

void menu(void)
{
   int opc;
   char frase[50],frase_rev[50];
   do{
      system ("cls");
      printf("\n *************** M E N U ************");
	  printf("\n1.- Cadena 1");
	  printf("\n2.- Cadena2");
	  printf("\n3.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&opc);
	  switch(opc)
	    {
		  case 1: 
		  		  printf("Escriba una frase\t");
		  		  fflush(stdin);
				  gets(frase);
				  cadena_1(frase);  
		  break;
		  case 2: programa2();  break;
		}
		system("pause");
		
   }while(opc != 3);
}

void cadena_1(char *frase)
{
	system("cls");
	printf("*************** Cadena 1 **************\n\n");
	int vocales=0,consonantes=0,espacios=0,raros=0,numeros=0;
	char *p;
	printf("Frase Original:\n");
	p = frase;
	puts(frase);//original
	strupr(frase);
	printf("\n");
	printf("Frase Mayuscula:\n");
	puts(frase);//mayusculas
	strlwr(frase);
	printf("\n");
	printf("Frase Minuscula:\n");
	puts(frase);//minusculas
	strrev(frase);	
	printf("\n");
	printf("Frase Al reves:\n");
	puts(frase);//al reves
	printf("\n");
	while (*p != '\0')
	{ 
		if (*p == 65 || *p == 97 || *p == 69|| *p == 101 || *p == 73 || *p ==105|| *p == 79|| *p == 111 || *p == 85|| *p == 117)
		   {
		   		vocales ++;
		   }
		   else
		   {
		   		if (!(*p>=48 && *p<=57 ||*p>=32&&*p<=47||*p>=58&&*p<=64||*p>=91&&*p<=96||*p>=123&&*p<=126)) 
		   			{
		     			consonantes ++;	   	
		   			}
		   			else
		   			{
		   				if (*p == 32)
		   					{
		   						espacios++;
		  					}
		  					else
		   					{
		   						if (*p >= 48 && *p <= 57)
		   							{
		   								numeros++;
		  							}
		  							else
		  							{
		  								raros++;
		  							}
		   						
		   					}
		   			} 			
		   }		    
	    p++; 
	}
	printf("Vocales%d\n",vocales);
	printf("Consonantes%d\n",consonantes);
	printf("Espacios%d\n",espacios);
	printf("Numeros%d\n",numeros);
	printf("Raros%d\n",raros);
}


