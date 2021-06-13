/*28.	Tipea, compila y ejecuta el siguiente programa:*/

#include <stdio.h>

// main(){ 
// float num;
//    printf ("Introduzca la num del 0 al 10:");
//    scanf ("%f", &num);
//    if (num<5)
//    printf ("SUSPENSO\n");
//    else printf ("APROBADO\n");

// return(0); 
// }

/*¿Qué sucede si la num introducida es 5, menor que 5, 
o mayor que 5. Modifíquelo para que muestre por pantalla
la palabra "SUSPENSO", "APROBADO", "numBLE" o "SOBRESALIENTE", 
según sea la num introducida.*/

main(){ 
float num;
   printf ("Introduzca la num del 0 al 10:");
   scanf ("%f", &num);
   if (num>=9)
   printf ("SOBRESALIENTE\n");
   if (num>=7)
   printf ("numBLE\n");
   if (num>=5)
   printf ("APROBADO\n");
   else printf ("SUSPENSO\n");

return(0); 
}

