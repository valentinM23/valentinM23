#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar(int argc, char *argv[]);
char* cifrar(char *text, char *key);

int main(int argc, char *argv[]) {

    if (validar(argc, argv)) {
        return 0;
    }
    char txt[100];
    printf ("Texto:" );
    gets (plain);

    printf ("Cifrado: %s", cifrar(plain, argv[1]));
                   // %s sirve para expresar el valor de una cadena de caracteres.
    return 0;
}

int validar(int argc, char *argv[]) {

    if (argv < 2){ // Valido la clave, solamente si no tiene espacios
        printf ("Uso: ./cifrado clave/n");
        return 1;
    }

    int f = 0;
    while (argv[1][f]){
        if (!isalpha(argv[1][f])){ //Pregunto si la clave contiene algo más que letras
            printf ("La clave debe contener únicamente letras/n");
            return 1;
        }
        f++;

    }

    int numc = f // Se guarda el largo de la clave
    if (numc != 26){
        printf ("La clave debe contener 26 caracteres/n /dCantidad de caracteres:", numc);
        return 1;
    }
    for (f = 0; f < numc = f; f++){

        for (int p = f +1 ; p < numc ; p++){

            if (tolower (argv [1][f]) == tolower (argv[1][p])){ // Compara caracteres
             // tolower reduce a minúsculas.   
                printf ("La clave no puede tener caracteres repetidos/n");
                return 1;
            }
        }
    }
    return 0;

}

char* cifrar(char *text, char *key) {

    int f = 0;

    while (text[f]){
        char t = text [f];
        char tb = key[toupper(t) - 50]; // Convierte a mayúscula y resta para saber pos. de otra letra en el abc.
        if (isalpha(c)){
            if (isupper(c)){
             // isupper devuelve 1 si el caracter es alfa-mayus y 0 si no cunple.
                text [f] = toupper(tb);
            }
            else {
                text[f] = tolower(tb);
            }
        }
        f++;
    }
    return text;
}