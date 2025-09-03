# Examen de Entrada: Parte 3

### Sólo redacte la definición de la función 'invertir()' en C++ que permite recibir un número entero positivo y devuelve un nuevo numero entero positivo que es el número entero invertido.

A continuación se presenta la definición de la función `invertir()`. La lógica consiste en usar un bucle para extraer el último dígito del número original y agregarlo al inicio del nuevo número.

```cpp
/**
 * Invierte un número entero positivo.
 *
 * @param numero El número entero positivo a invertir.
 * @return El número con los dígitos invertidos.
 *
 * Ejemplo:
 *   invertir(517) devolverá 715.
 */
int invertir(int numero) {
    int numeroInvertido = 0;
    int digito;

    while (numero > 0) {
        digito = numero % 10;
        numeroInvertido = (numeroInvertido * 10) + digito;
        numero /= 10;
    }

    return numeroInvertido;
}