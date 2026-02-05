*Este proyecto ha sido creado como parte del currículo de 42 por ciparren*

# Libft - Tu primera librería

## 🗣️ Descripción

**Libft** es el primer proyecto del currículo de 42. Consiste en programar una librería en C propia, reimplementando funciones estándar de la librería `libc` y desarrollando otras nuevas de utilidad general.

El objetivo pedagógico es comprender el funcionamiento interno de estas funciones, aprender a gestionar la memoria manualmente (sin *leaks*) y dominar las estructuras de datos básicas como las listas enlazadas. Esta librería se utilizará como base para futuros proyectos del cursus.

## 🛠️ Instrucciones

### Requisitos
El proyecto está escrito en lenguaje C y requiere un compilador como `cc` y las utilidades estándar de `Make`.

### Compilación
El proyecto incluye un `Makefile` que gestiona la compilación de la librería estática `libft.a`.

*   **Compilar:**
    Genera el archivo `libft.a` con las funciones estándar y de utilidad.
    ```bash
    make
    ```
*   **Limpiar archivos objeto:**
    Elimina los archivos `.o` generados.
    ```bash
    make clean
    ```

*   **Limpieza total:**
    Elimina los objetos y el archivo `libft.a`.
    ```bash
    make fclean
    ```

*   **Recompilar:**
    Ejecuta `fclean` seguido de `make`.
    ```bash
    make re
    ```

### Uso
Para utilizar esta librería en tus proyectos:
1.  Incluye el archivo de cabecera en tu código:
    ```c
    #include "libft.h"
    ```


## 📚 Contenido de la Librería

### 1. Funciones de Libc
Reimplementación de funciones estándar con el mismo comportamiento que las originales.

*   **Manipulación de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
*   **Manipulación de cadenas:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`.
*   **Manipulación de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.

### 2. Funciones adicionales
Funciones útiles para el manejo de cadenas y descriptores de archivo que no están en la `libc` estándar o difieren de ella.

*   `ft_substr`: Crea una subcadena a partir de una cadena.
*   `ft_strjoin`: Concatena dos cadenas en una nueva.
*   `ft_strtrim`: Elimina caracteres específicos del principio y final de una cadena.
*   `ft_split`: Divide una cadena en un array de cadenas usando un delimitador.
*   `ft_itoa`: Convierte un entero a una cadena de caracteres (ASCII).
*   `ft_strmapi`: Aplica una función a cada carácter de una cadena creando una nueva.
*   `ft_striteri`: Aplica una función a cada carácter de una cadena (por referencia).
*   `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo dado.
*   `ft_putstr_fd`: Escribe una cadena en un descriptor de archivo dado.
*   `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea en un fd.
*   `ft_putnbr_fd`: Escribe un número entero en un descriptor de archivo dado.

### 3. Bonus: Listas enlazadas
Funciones para manipular la estructura de datos `t_list`.

*   `ft_lstnew`: Crea un nuevo nodo.
*   `ft_lstadd_front`: Añade un nodo al principio de la lista.
*   `ft_lstsize`: Cuenta los nodos de la lista.
*   `ft_lstlast`: Devuelve el último nodo de la lista.
*   `ft_lstadd_back`: Añade un nodo al final de la lista.
*   `ft_lstdelone`: Libera la memoria del contenido de un nodo.
*   `ft_lstclear`: Elimina y libera una lista completa.
*   `ft_lstiter`: Itera sobre la lista aplicando una función al contenido.
*   `ft_lstmap`: Itera sobre la lista y crea una nueva aplicando una función al contenido.

### 4 

