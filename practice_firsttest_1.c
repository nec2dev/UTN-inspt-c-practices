#include<stdio.h>

int main(){
//IF
if(/*condicion*/){
   /*accion*/
}else /*accion o no*/

//IF ANIDADOS
if(/*condicion1*/){
   /*accion1*/
}else{
   if(/*condicion2*/){
      /*accion2*/
   }else{
      if(/*condicion3*/){
         /*accion3*/
      }else{
         /*accion o no*/
      }
   }
}
//WHILE
while(/*condicion*/){
    /*accion*/
}
//DO WHILE
do{
    /*accion*/
    }
while(/*condicion*/);

//FOR
for(/*valor inicial*/i=0; /*valor final*/i<5; /*incremento o decremento*/i++)
    {
     /*acciones*/
    }
//SWITCH
switch(/*argumento*/) {
      case /*eleccion*/1: 
         /*accion*/
         break;
      case /*eleccion*/2: 
         /*accion*/
         break;
      case /*eleccion*/3: 
         /*accion*/
         break;
      default :
         /*si la eleccion no coincide con ningun caso*/;
   } 
//PUNTEROS
int a=10;
int *p;
/*  *p La variable cuya direccion esta almacenada en p
    &p La direccion de p
*/

printf("La variable p esta en %d, contiene %d y la dirección apuntada por p contiene%d\n", &p, p,*p);

return 0;

}
