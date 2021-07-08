/*12- Qué emite el programa?*/
#include <stdio.h>
int main() {
   
   int u=3, v;
   int *pu;
   int *pv;
   pu=&u;
   v=*pu;
   pv=&v;

    printf("u=%f, &u=%X, pu=%X, *pu=%f\n", u, &u, pu, *pu);
    printf("v=%f, &v=%X, pv=%X, *pv=%f\n", v, &v, pv, *pv);

   system("pause");

   return 0;
};