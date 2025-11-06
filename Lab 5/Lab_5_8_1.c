#include <stdio.h>
void Hola()
{
    puts("Hola!");
}
void otro()
{
    puts("soy yo - otra funcion");
}
int main(void)
{
    Hola();
    Hola();
    Hola();
    otro();
    Hola();
    otro();
    return 0;
}