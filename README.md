# ft_printf

Implémentation en C de la fonction standard `printf`, compilée sous forme de bibliothèque statique (`libftprintf.a`).

## Description

`ft_printf` reproduit le comportement de base de `printf` (`<stdio.h>`) en gérant un nombre variable d'arguments grâce aux macros variadiques (`<stdarg.h>`). Elle écrit le résultat formaté sur la sortie standard et retourne le nombre total de caractères affichés.

### Prototype

```c
int ft_printf(const char *s, ...);
```

## Spécificateurs supportés

| Spécificateur | Description |
| :---: | :--- |
| `%c` | Affiche un caractère unique |
| `%s` | Affiche une chaîne de caractères |
| `%p` | Affiche l'adresse d'un pointeur en hexadécimal (`0x...`) |
| `%d` | Affiche un nombre décimal signé (base 10) |
| `%i` | Affiche un entier signé en base 10 |
| `%u` | Affiche un entier décimal non signé (base 10) |
| `%x` | Affiche un nombre en hexadécimal (base 16) en minuscules |
| `%X` | Affiche un nombre en hexadécimal (base 16) en majuscules |
| `%%` | Affiche le caractère `%` |

## Structure du projet

```text
.
├── Makefile
└── src/
    ├── printf.h           # Prototypes et inclusions
    ├── ft_printf.c        # Parsing de la chaîne de format et dispatch
    ├── ft_print_str.c     # Affichage des caractères (%c) et chaînes (%s)
    ├── ft_print_allnbr.c  # Affichage des entiers signés (%d, %i) et non signés (%u)
    ├── ft_print_hexa.c    # Conversion et affichage en hexadécimal (%x, %X)
    └── ft_print_voidp.c   # Affichage des adresses mémoire (%p)
```

## Compilation

Le projet utilise un `Makefile` avec les règles suivantes :

```bash
# Compiler la bibliothèque libftprintf.a
make

# Supprimer les fichiers objets (.o)
make clean

# Supprimer les fichiers objets et libftprintf.a
make fclean

# Recompiler entièrement le projet
make re
```

## Utilisation

Incluez l'en-tête `printf.h` dans votre fichier source, puis liez la bibliothèque `libftprintf.a` lors de la compilation.

### Exemple

```c
#include "src/printf.h"

int main(void)
{
    int value = 255;

    ft_printf("Bonjour %s !\n", "le monde");
    ft_printf("Caractère : %c\n", 'A');
    ft_printf("Décimal : %d | Non signé : %u\n", -123, 123);
    ft_printf("Hexa (min) : %x | Hexa (maj) : %X\n", value, value);
    ft_printf("Pointeur : %p\n", (void *)&value);
    ft_printf("Progression : 100%%\n");
    return (0);
}
```

### Compilation de l'exemple

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o mon_programme
./mon_programme
```
