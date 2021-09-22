#include <stdio.h>
#include <conio.h>
main(){
      int fila,columna,n,m=0,v1=0,c=0,aux,me=0;
      int matriz[3][3];
      for(fila=0;fila<3;fila++){
      for(columna=0;columna<3;columna++){
      printf("Ingrese el valor de posicion [%d][%d]",fila,columna);
      scanf("%d",&matriz[fila][columna]);
      }
      }
      printf("\n");
      printf("\nLa matriz original:\n\n");
      for(fila=0;fila<3;fila++){
      for(columna=0;columna<3;columna++){
      printf("[%d]",matriz[fila][columna]);
      }
      printf("\n");
      }
        me=matriz[0][0];
      	m=matriz[0][0]; 
	   for(fila=0;fila<3;fila++){
      for(columna=0;columna<3;columna++){
	  if(m<matriz[fila][columna]){
	  	m=matriz[fila][columna]; 	  
       }   
       if(me>matriz[fila][columna]){
	  	me=matriz[fila][columna]; 	  
        }
        }
        }
        printf("el numero mayor de la matriz es %d\n",m);
         printf("el numero menor de la matriz es %d\n",me);
        }
