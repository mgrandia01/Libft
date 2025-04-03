# Libft - Librería Personal

**Libft** Libft es el primer proyecto del curso 42, diseñado para ayudar a los estudiantes a profundizar en el lenguaje C con un enfoque en la programación desde cero. Este proyecto permite desarrollar un mayor rigor en la atención a los detalles y establece las bases necesarias para los desafíos posteriores del curso.

## Descripción

El proyecto de **Libft** tiene como objetivo recrear algunas de las funciones más esenciales de C para poder reutilizarlas durante los diferentes proyectos del curso en 42. La implementación de estas funciones proporciona una comprensión más profunda del lenguaje C y sus bibliotecas estándar. Algunas de las funciones implementadas en este proyecto son utilizadas frecuentemente en otros desafíos de programación, lo que permite tener herramientas personalizadas listas para ser usadas.

## Funciones Implementadas

### Funciones de Cadenas de Caracteres:
- `ft_atoi`: Convierte una cadena de caracteres a un número entero.
- `ft_bzero`: Llena los primeros `n` bytes de un bloque de memoria con ceros.
- `ft_calloc`: Asigna memoria e inicializa todos los valores a cero.
- `ft_isalnum`: Verifica si un carácter es alfanumérico.
- `ft_isalpha`: Verifica si un carácter es alfabético.
- `ft_isascii`: Verifica si un carácter es un valor ASCII válido.
- `ft_isdigit`: Verifica si un carácter es un dígito numérico.
- `ft_isprint`: Verifica si un carácter es imprimible.
- `ft_itoa`: Convierte un número entero a una cadena de caracteres.
- `ft_strchr`: Busca la primera aparición de un carácter en una cadena.
- `ft_strdup`: Devuelve una nueva cadena que es una copia de la cadena dada.
- `ft_striteri`: Aplica una función a cada carácter de una cadena, modificándola.
- `ft_strjoin`: Une dos cadenas de caracteres.
- `ft_strlcat`: Añade una cadena a otra con un límite de longitud.
- `ft_strlcpy`: Copia una cadena de caracteres con un límite de longitud.
- `ft_strlen`: Calcula la longitud de una cadena de caracteres.
- `ft_strmapi`: Aplica una función a cada carácter de una cadena y devuelve una nueva cadena.
- `ft_strncmp`: Compara las primeras `n` posiciones de dos cadenas.
- `ft_strnstr`: Busca una subcadena dentro de una cadena, hasta un límite de longitud.
- `ft_strrchr`: Busca la última aparición de un carácter en una cadena.
- `ft_strtrim`: Elimina los caracteres de espacio del inicio y final de una cadena.
- `ft_substr`: Devuelve una subcadena de una cadena.
- `ft_tolower`: Convierte un carácter en minúscula.
- `ft_toupper`: Convierte un carácter en mayúscula.

### Funciones de Listas:
- `ft_lstadd_back`: Añade un nuevo nodo al final de la lista.
- `ft_lstadd_front`: Añade un nuevo nodo al principio de la lista.
- `ft_lstclear`: Elimina todos los nodos de la lista.
- `ft_lstdelone`: Elimina un nodo de la lista.
- `ft_lstiter`: Aplica una función a cada nodo de la lista.
- `ft_lstlast`: Devuelve el último nodo de la lista.
- `ft_lstmap`: Aplica una función a cada nodo de la lista, devolviendo una nueva lista.
- `ft_lstnew`: Crea un nuevo nodo.
- `ft_lstsize`: Devuelve el número de nodos de la lista.

### Funciones de Memoria:
- `ft_memchr`: Busca un carácter en un bloque de memoria.
- `ft_memcmp`: Compara dos bloques de memoria.
- `ft_memcpy`: Copia un bloque de memoria de un lugar a otro.
- `ft_memmove`: Mueve un bloque de memoria.
- `ft_memset`: Llena un bloque de memoria con un valor específico.

### Funciones de Entrada/Salida:
- `ft_putchar_fd`: Escribe un carácter en un archivo.
- `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea en un archivo.
- `ft_putnbr_fd`: Escribe un número entero en un archivo.
- `ft_putstr_fd`: Escribe una cadena en un archivo.
- `ft_split`: Divide una cadena en un array de cadenas, usando un delimitador.
