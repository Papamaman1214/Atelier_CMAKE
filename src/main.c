#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    // Sécurité de base : faut au moins une commande
    if (argc < 2) {
        printf("Erreur de parametres");
        return 1;
    }

    char* op = argv[1];

    // CAS 1 : La fonction Carré (3 arguments : prog + car + valeur)
    if (strcmp(op, "car") == 0) {
        if (argc == 3) {
            int res = square(atoi(argv[2]));
            printf("%d\n", res);
        } else {
            printf("Erreur de parametres");
        }
    }
    // CAS 2 : Les autres opérations (4 arguments : prog + op + val1 + val2)
    else if (argc == 4) {
        char* a = argv[2];
        char* b = argv[3];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%lf", r);
        }
        else {
            // 4 arguments mais commande inconnue
            printf("Erreur de parametres");
        }
    }
    // CAS 3 : Mauvais nombre d'arguments
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
