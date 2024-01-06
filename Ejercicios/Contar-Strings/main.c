//Librerias
#include <stdio.h>

//Definiciones
#define max_length 100

int main() {

    //Variables
    char input[max_length];
    int longitud = 0;

    //Ingresa un string
    printf("Ingrese un input: ");

    //Obtiene el string ingresado [LEER DOCUMENTACIÓN DE FGETS https://solucioningenieril.com/programacion_en_c/funcion_gets_fgets_y_puts]
    fgets(input, max_length, stdin);

    for(int i = 0; input[i] != '\0' && input[i] != '\n'; i++){
        longitud++;
    }

    //Da los strings ingresados
    printf("Ingresaste %d caracteres.", longitud);

    return 0;
}
