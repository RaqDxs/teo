# Examen de Entrada: Parte 3

### Sólo redacte la definición de la función 'invertir()' en C++ que permite recibir un número entero positivo y devuelve un nuevo numero entero positivo que es el número entero invertido.

A continuación se presenta la definición de la función `invertir()`. La lógica consiste en extraer el último dígito del número original y agregarlo al inicio del nuevo número en cada iteración.

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

    // El bucle se ejecuta mientras queden dígitos en el número original
    while (numero > 0) {
        // 1. Obtenemos el último dígito
        digito = numero % 10;

        // 2. Agregamos el dígito al número invertido
        // (multiplicamos por 10 para "hacer espacio" al nuevo dígito)
        numeroInvertido = (numeroInvertido * 10) + digito;

        // 3. Eliminamos el último dígito del número original
        numero /= 10; // Es equivalente a numero = numero / 10;
    }

    return numeroInvertido;
}