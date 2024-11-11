#include <unistd.h>

char    *rev_print(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    while (i > 0)
    {
        i--;
        write(1, &str[i], 1);
    }
    return (str);
}

int main() {
    char *str = "Hola";
    rev_print(str);
    write(1, "\n", 1);  // Salto de línea después de la cadena invertida
    return 0;
}
