/*28.	Tipea, compila y ejecuta el siguiente programa:*/

#include <stdio.h>

// main(){ 
// float nota;
//    printf ("Introduzca la nota del 0 al 10:");
//    scanf ("%f", &nota);
//    if (nota<5)
//    printf ("SUSPENSO\n");
//    else printf ("APROBADO\n");

// return(0); 
// }

/*¿Qué sucede si la nota introducida es 5, menor que 5, 
o mayor que 5. Modifíquelo para que muestre por pantalla
la palabra "SUSPENSO", "APROBADO", "NOTABLE" o "SOBRESALIENTE", 
según sea la nota introducida.*/

main(){ 
float nota;
   printf ("Introduzca la nota del 0 al 10:");
   scanf ("%f", &nota);
   if (nota>=9)
   printf ("SOBRESALIENTE\n");
   if (nota>=7)
   printf ("NOTABLE\n");
   if (nota>=5)
   printf ("APROBADO\n");
   else printf ("SUSPENSO\n");

return(0); 
}

