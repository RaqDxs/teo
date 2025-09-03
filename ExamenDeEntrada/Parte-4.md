# Examen de Entrada: Parte 4

### ¿Qué son los estándares de codificación?

Los estándares de codificación (o *coding standards*) son un conjunto de reglas, guías de estilo y buenas prácticas para escribir código fuente. Su objetivo principal es mejorar la calidad del software, haciendo que el código sea:
- **Legible y Consistente:** Facilita que cualquier programador del equipo pueda entender y modificar el código.
- **Mantenible:** Simplifica la corrección de errores y la adición de nuevas funcionalidades en el futuro.
- **Menos propenso a errores:** Muchas reglas están diseñadas para evitar errores comunes.

Ejemplos de lo que definen: convenciones de nombres para variables y funciones (ej. `camelCase` o `snake_case`), reglas de indentación, uso de comentarios o MAYUSCULASS y la forma de estructurar el código.

---
### ¿Quién es considerado el padre de la Programación Orientada a Objetos?
<div style="display: flex; align-items: center;">
  <div style="flex: 1;">
    <p><b>Alan Kay</b> es ampliamente considerado el "padre de la Programación Orientada a Objetos". 
    Él acuñó el término <i>Object-Oriented Programming</i> en los años 60 y fue una de las fuerzas principales detrás del desarrollo del lenguaje <b>Smalltalk</b>, que fue el primero en implementar completamente los conceptos de OOP (objetos, mensajes, encapsulamiento).</p>
  </div>
  <div style="margin-left: 20px;">
    <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS4JOxQxNNpmECDdHd4SkvL_3EoSOE69sUpyw&s" alt="Alan Kay" width="200"/>
  </div>
</div>

---
### ¿Qué diferencia hay entre un editor de texto plano y un editor de texto enriquecido?

La diferencia fundamental está en lo que almacenan:

*   **Editor de Texto Plano (Plain Text):**
    *   **Contenido:** Almacena únicamente caracteres (letras, números, símbolos) según una codificación como ASCII o UTF-8.
    *   **Formato:** No guarda ninguna información de formato (negritas, cursivas, tipo de letra, tamaño, colores, imágenes).
    *   **Uso:** Esencial para programar, escribir scripts, y editar archivos de configuración. El código fuente debe ser texto plano para que el compilador lo entienda.
    *   **Ejemplos:** VS Code, Sublime Text, Notepad (Windows), Vim, Nano.

*   **Editor de Texto Enriquecido (Rich Text):**
    *   **Contenido:** Almacena tanto los caracteres como metadatos complejos sobre cómo deben mostrarse (formato).
    *   **Formato:** Permite aplicar estilos como negritas, cursivas, diferentes fuentes, tamaños, colores, insertar imágenes, tablas, etc.
    *   **Uso:** Para crear documentos destinados a la lectura humana.
    *   **Ejemplos:** Microsoft Word, Google Docs, WordPad, LibreOffice Writer.

---
### ¿Cuál usar [TABS] o [ESPACIOS] para la identación de sus programas?

*   **Argumento a favor de los Espacios:**
    *   **Consistencia Visual:** La indentación se verá exactamente igual en cualquier editor, sistema operativo o configuración, ya que un espacio es siempre un espacio. Este es el argumento más fuerte y por el cual muchos estándares (como el de Google o Python) lo prefieren.

*   **Argumento a favor de los Tabs:**
    *   **Flexibilidad:** Permiten que cada desarrollador configure el ancho visual de la indentación en su editor (ej. equivalente a 2, 4 u 8 espacios) sin cambiar el código fuente. Un tab es un solo carácter, lo que ahorra un mínimo de espacio en disco.

**Conclusión y recomendación:**
Para la mayoría de los proyectos modernos y colaborativos, se recomienda usar **ESPACIOS**. La consistencia visual que ofrecen previene problemas de alineación y legibilidad. La mayoría de los editores de código modernos pueden configurarse para que al presionar la tecla `Tab`, se inserten automáticamente un número predefinido de espacios (usualmente 4).