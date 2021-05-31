/*12- Qué emite el programa?*/
#include <stdio.h>
int main() {
   
   int u=3, v;
   int *pu;
   int *pv;
   pu=&u;
   v=*pu;
   pv=&v;

    printf("u=%d, &u=%X, pu=%X, *pu=%d\n", u, &u, pu, *pu);
    printf("v=%d, &v=%X, pv=%X, *pv=%d\n", v, &v, pv, *pv);

   system("pause");

   return 0;
};