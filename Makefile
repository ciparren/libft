# --- VARIABLES ---
# Nombre del archivo de salida (Librería) [2]
NAME = libft.a

# Compilador y Flags obligatorios [1]
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Comando para crear la librería (ar) [2]
# r: reemplaza o añade archivos, c: crea sin avisar, s: índice (como ranlib)
AR = ar rcs

# Comando para borrar archivos
RM = rm -f

# --- ARCHIVOS FUENTE (Mandatory Part) [3]-[4] ---
# Debes listar explícitamente todos los archivos fuente [5]
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
      ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
      ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
      ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# --- ARCHIVOS FUENTE (Bonus Part) [6]-[7] ---
# Los bonus deben estar en archivos _bonus.c separados [1]

# --- OBJETOS ---
# Transformamos la lista de .c a .o
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# --- REGLAS ---

# Regla principal: compila la parte obligatoria
all: $(NAME)

# Crea la librería $(NAME) solo si los objetos cambiaron
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Regla genérica para compilar .c a .o [8]
# $< es el archivo fuente, $@ es el archivo objeto [9]
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla Bonus: Añade los objetos bonus a la librería existente
bonus: $(NAME)
# Limpia los archivos objeto (.o) [10]
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

# Limpia todo: objetos y la librería (.a) [11]
fclean: clean
	$(RM) $(NAME)

# Reconstruye todo desde cero
re: fclean all

# Indica que estas reglas no son archivos reales [12]
.PHONY: all clean fclean re bonus
