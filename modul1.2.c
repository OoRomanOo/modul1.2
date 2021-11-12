#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a, b, i;
    b = get_int("B:");
    do 
    {
    a = get_int("A:"); 
    }
    while (a > b);
    
    for (i = 0; a != (b + 1); i++)
    {
        printf("%i\n", a);
        a = a + 1;
    }
    printf("Кількість:%i\n", i);
}