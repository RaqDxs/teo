# Examen de Entrada: Parte 2

### ¿Cómo le proveemos al Sistema Operativo de un compilador C++? (MSWindows o GNU/Linux).

Para compilar código C++, necesitamos un conjunto de herramientas llamado "toolchain", cuyo componente principal es el compilador.

*   **En GNU/Linux (como Ubuntu, Debian, Fedora):**
    El compilador más común es G++ (parte de la GNU Compiler Collection, GCC). Se instala fácilmente desde la terminal con el gestor de paquetes del sistema. Por ejemplo, en sistemas basados en Debian/Ubuntu:
    ```bash
    sudo apt-get install build-essential
    ```

*   **En MSWindows:**
    Tenemos dos opciones principales:
    1.  **MinGW-w64:** Es un port del compilador GCC para Windows. Es la opción más ligera y popular para desarrollo estilo GNU en Windows.
    2.  **Microsoft Visual C++ (MSVC):** Es el compilador de Microsoft y viene incluido con Visual Studio.

---

### En la terminal del sistema operativo, usted se encuentra en el directorio donde están ubicados 'student.cpp' y 'me.cpp'. Ingrese los comandos necesarios para compilar su programa con el nombre 'me.exe' o 'me.out'.

Usando el compilador G++, el comando para compilar ambos archivos y generar un ejecutable es el siguiente:

```bash
g++ me.cpp student.cpp -o me.out
```
---
### ¿Cómo ejecuta su programa desde la terminal? .
*   **En GNU/Linux o macOS:**
    Se debe indicar que el ejecutable está en el directorio actual usando `./`.
    ```bash
    ./me.out
    ```

*   **En Windows (usando CMD o PowerShell):**
    Generalmente, basta con escribir el nombre del archivo ejecutable.
    ```bash
    me.exe
    ```