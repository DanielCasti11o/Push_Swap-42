# Push_Swap-42

# \ REALIZADO CON LISTAS ENLAZADAS /

Algoritmo de ordenación de números en C. Anteriormente lo implementé usando arrays, pero enfrenté varios errores al usar `realloc`, por lo que decidí usar listas enlazadas. Estas son más recomendables debido a su flexibilidad y eficiencia en estructura de datos. Espero que les guste.

## Consejos para este proyecto

### 1. Elegir la estructura adecuada

Lo más importante antes de cualquier cosa es decidir qué estructura usarás para tu objetivo y tener una idea de cómo implementarla en tu código. Mi primera recomendación es entender bien las estructuras y repasar las listas enlazadas y sus variaciones (doblemente enlazadas, circulares, etc.). Quizás podrías implementar algo diferente que resulte más eficiente para ti.

### 2. Parseo

El parseo es crucial para este proyecto y probablemente también para los siguientes. Lee bien el subject para identificar:

- Lo que necesitas manejar.
- Los errores que no debes permitir en el programa (por ejemplo, duplicados o caracteres no numéricos).
- IMPORTANTE: Ve probando con el checker bastantes casos de parseo, incluso casos que no esten especificados e incluso pide a tus compañeros que intenter tumbar tu parseo.

### 3. Indexación

Para los algoritmos que conozco, la indexación es un paso importante. Esto implica determinar la posición de cada número dentro de un arreglo ordenado. Esta información es útil para evaluar la "costosidad" de los movimientos que realizarás.

### 4. Inicialización de la estructura

Después de entender cómo organizar los datos, inicializa tu estructura. Asegúrate de saber:

- Qué debes inicializar.
- Qué no debes inicializar.

### 5. Movimientos

Implementa las funciones para los movimientos definidos en el subject: `ra`, `rb`, `rr`, `sa`, `sb`, `rra`, `rrb`, `rrr`. Entiende bien su funcionamiento. Una vez creadas, prébalas y usa `printf` para verificar que funcionen correctamente. **Recuerda hacer esto a medida que avances en el proyecto.**

### 6. Algoritmos básicos

Cuando tengas todo lo anterior listo, comienza con los algoritmos básicos para pocos números. Por ejemplo, podrías trabajar hasta con 6 números y luego intentar ir más allá. ¿Por qué no intentarlo?

### 7. Elegir un algoritmo avanzado

Con todo preparado, elige el algoritmo de ordenación que prefieras. Te recomiendo explorar:

- **TURK**
- **Ksort**

## Notas adicionales

En mi proyecto encontrarás algunas funciones que no uso. Estas fueron incluidas para pruebas durante el desarrollo.

¡Mucha suerte con el proyecto!

