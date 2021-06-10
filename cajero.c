#include <stdio.h>

int main (void) {

    int monto;
    int P50 = 0, P20 = 0, P10 = 0, P5 = 0, P1 = 0;

    printf ("Ingrese el monto a retirar: \n");
    scanf ("%d" , &monto);

        while (monto >= 50) { // Mientas pueda sacar otro P50
          monto= monto - 50;
          P50++;

        }
        while (monto >= 20) { // mientras pueda sacar otro P20
         monto= monto - 20;
         P20++;

        }
        while (monto >= 10)  { // Mientras pueda sacar otro P10
         monto= monto - 10;
         P10++;

        }
        while (monto >= 5) { // Mientras pueda sacar otro P5
         monto= monto - 10;
         P5++;

        }  
        while (monto >= 1) { // Mientras puede sacra otro P1
         monto= monto - 1;
         P1++;
         
        }

    printf ("Cantidad de billetes de 50: %d\n", P50);
    printf ("Cantidad de billetes de 20: %d\n", P20);
    printf ("Cantidad de billetes de 10: %d\n", P10);
    printf ("Cantidad de billetes de 5: %d\n", P5);
    printf ("Cantidad de billetes de 1: %d\n", P1);

    return 0;
}
    
    

    






