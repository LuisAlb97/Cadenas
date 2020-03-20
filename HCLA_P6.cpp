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

//*********** PROGRAMA -
void programa2(void)
{
   system ("cls");
   printf("********* Cadena2 ***********\n\n");
    char cadena[]="ENSENADA";

         printf("Salida  1: ");
          Salida1(cadena);
         printf("\nSalida  2: ");
          Salida2(cadena);
         printf("\nSalida  3: ");
          Salida3(cadena);
         printf("\n\nSalida  4: ");
          Salida4(cadena);
         printf("\n\nSalida  5: \n");
          Salida5(cadena);
        printf("\nSalida  6: \n");
          Salida6(cadena);
         printf("\nSalida  7: \n");
          Salida7(cadena);
         printf("\nSalida  8: \n");
          Salida8(cadena);
         printf("\nSalida  9: \n");
          Salida9(cadena);
         printf("\nSalida  10: \n");
          Salida10(cadena);

  printf("\n\n");

     system("pause");
}


//*********** FUNCIONES:
void Salida1(char *cadena)
{
	printf("%s", cadena);

}
void Salida2(char *cadena)
{
	char cadena2[10];
	strcpy(cadena2, cadena);
	printf("%s", strrev(cadena2));
}
void Salida3(char *cadena)
{
	int i;
	char cadena3[10];
	strcpy(cadena3, cadena);

	 for(i=0; i<cadena3[i]; i++)
	 {
	 	printf("\n\t%c", cadena3[i]);
	 }
}
void Salida4(char *cadena)
{
	int i;
	char cadena4[10];
	strcpy(cadena4, cadena);
	 strrev(cadena4);
	 for(i=0; i<cadena[i]; i++)
	 {
	 	printf("\n\t%c", cadena4[i]);
	 }
}
void Salida5(char *cadena)
{
   int i=0;
   char cadena5[10];
    strcpy(cadena5, cadena);

    for(i=strlen(cadena5); i>0; i--)
     {
     	cadena5[i]=' ';
     	puts(cadena5);
	  }
}
void Salida6(char *cadena)
{
  int i=0;
   char cadena6[10];
    strcpy(cadena6, cadena);
    strrev(cadena6);

     for(i=strlen(cadena6); i>0; i--)
     {
     	cadena6[i]=' ';
     	puts(cadena6);
	  }
}
void Salida7(char *cadena)
{
	int i;
   char cadena7[10];
    strcpy(cadena7, cadena);
   // strrev(cadena7);

     for(i=0; i<strlen(cadena7); i++)
     {
	    puts(cadena7);
     	cadena7[i]=' ';
	  }
}
void Salida8(char *cadena)
{
	int i;
   char cadena8[10];
    strcpy(cadena8, cadena);
    strrev(cadena8);

     for(i=0; i<strlen(cadena8); i++)
     {
	    puts(cadena8);
     	cadena8[i]=' ';
	  }
}
void Salida9(char *cadena)
{

   int i;
   char txt[10];

    strcpy(txt, cadena);

     for(i=0; i<strlen(txt); i++)
     {
       if(txt[i]=='B'||txt[i]=='C'||txt[i]=='D'||txt[i]=='F'||
	          txt[i]=='G'||txt[i]=='H'||txt[i]=='J'||txt[i]=='K'||
			  txt[i]=='L'||txt[i]=='M'||txt[i]=='N'||txt[i]=='Ñ'||
			  txt[i]=='P'||txt[i]=='Q'||txt[i]=='R'||txt[i]=='S'||
			  txt[i]=='T'||txt[i]=='V'||txt[i]=='W'||txt[i]=='X'||
			  txt[i]=='Y'||txt[i]=='Z'
		 );
		  else
		  {
		  	txt[i]= ' ';
		  }
	  }
	  puts(txt);
}

void Salida10(char *cadena)
{
		int i;
   char txt[10];

    strcpy(txt, cadena);

     for(i=0; i<strlen(txt); i++)
     {
       if(txt[i]=='A'||txt[i]=='E'||txt[i]=='I'||txt[i]=='O'||txt[i]=='U');

		 else
		  {
		  	txt[i]= ' ';
		  }
	  }
	  puts(txt);
}

