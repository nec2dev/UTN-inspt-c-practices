/*44.Las fechas de los signos zodiacales se muestran 
en la siguiente tabla. Escriba un programa que lea el 
día y mes de nacimiento y despliegue el signo zodiacal 
correspondiente. Utilice sentencias con el operador ?.
22 dic al 20 ene: CAPRICORNIO
21 ene al 19 feb: ACUARIO
20 feb al 20 mar: PISCIS
21 mar al 20 abr: ARIES
21 abr al 21 may: TAURO
22 may al 21 jun: GEMINIS
22 jun al 22 jul: CANCER
23 jul al 23 ago: LEO
24 ago al 23 sep: VIRGO
24 sep al 23 oct: LIBRA
24 oct al 22 nov: ESCORPIO
24 nov al 21 dic: SAGITARIO*/

#include <stdio.h>

int main(){
     
    int dia, mes;

    printf("ingrese el dia de su nacimiento");
    scanf("%d", &dia);

    printf("ingrese el mes de su nacimiento");
    scanf("%d", &mes);

    if((dia>=22&&dia<=31)&&mes==12)
    printf("Capricornio");
    else if((dia>=1&&dia<=20)&&mes==1)
    printf("Capricornio");

    if((dia>=21&&dia<=31)&&mes==1)
    printf("Acuario");
    else if((dia>=1&&dia<=19)&&mes==2)
    printf("Acuario");

    if((dia>=20&&dia<=29)&&mes==2)
    printf("Piscis");
    else if((dia>=1&&dia<=20)&&mes==3)
    printf("Piscis");

    if((dia>=21&&dia<=31)&&mes==3)
    printf("Aries");
    else if((dia>=1&&dia<=20)&&mes==4)
    printf("Aries");

    if((dia>=21&&dia<=30)&&mes==4)
    printf("Tauro");
    else if((dia>=1&&dia<=21)&&mes==5)
    printf("Tauro");

    if((dia>=22&&dia<=31)&&mes==5)
    printf("Geminis");
    else if((dia>=1&&dia<=20)&&mes==6)
    printf("geminis");

    if((dia>=22&&dia<=30)&&mes==6)
    printf("Cancer");
    else if((dia>=1&&dia<=22)&&mes==7)
    printf("Cancer");

    if((dia>=23&&dia<=31)&&mes==7)
    printf("Leo");
    else if((dia>=1&&dia<=23)&&mes==8)
    printf("Leo");

    if((dia>=24&&dia<=31)&&mes==8)
    printf("Virgo");
    else if((dia>=1&&dia<=23)&&mes==9)
    printf("Virgo");

    if((dia>=24&&dia<=30)&&mes==9)
    printf("libra");
    else if((dia>=1&&dia<=23)&&mes==10)
    printf("libra");

    if((dia>=24&&dia<=31)&&mes==10)
    printf("Escorpio");
    else if((dia>=1&&dia<=22)&&mes==11)
    printf("Escorpio");

    if((dia>=23&&dia<=30)&&mes==11)
    printf("Sagitario");
    else if((dia>=1&&dia<=21)&&mes==12)
    printf("Sagitario");
    
    return(0);
}
