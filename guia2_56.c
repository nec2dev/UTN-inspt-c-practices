/*56.Supongamos que estamos en época de elecciones y 
deseamos ver cómo salió una encuesta a 1000 personas 
algunas personas sobre intención de votos de 2 partidos 
políticos X e Y en 2 zonas de residencias: Capital y 
Gran Bs.As. Los datos que necesitaremos para el proceso 
son la cantidad de votos de cada partido en cada una de 
las zonas. Se pide:
1-	Indicar en cuál zona hubo más encuestas
2-	Partido político ganador según encuesta
3-	Indicar, si se da el caso, si hay ballotage. 
En este caso asumiremos que hay ballotage si el porcentaje 
de votos de un partido no supera en 10% al porcentaje de 
votos del otro candidato.
*/

#include <stdio.h>

int main(){
     
    int x, y, votoscabax, votosgbax, votoscabay, votosgbay;
    votoscabax=351;
    votosgbax=200;
    votoscabay=200;
    votosgbay=249;

    x=(votoscabax+votosgbax)*0.1;
    y=(votoscabay+votosgbay)*0.1;
 
    if (votoscabax+votoscabay>votosgbax+votosgbay) 
    printf("Se realizaron más encuesta en CABA que en el Gran Buenos Aires\n");
    else
    printf("Se realizaron más encuesta en el Gran Buenos Aires que en CABA\n");
    
    if ((x-y>=0&&x-y<=10)||(y-x>=0&&y-x<=10)) 
    printf("Segun esta encuesta habria ballotage\n");
    else if (votoscabax+votosgbax>votoscabay+votosgbay) 
    printf("Segun esta encuesta el ganador seria X\n");
    else
    printf("Segun esta encuesta el ganador seria Y\n");

    return(0);
}