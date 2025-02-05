#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_a = *a;  
    *a = temp_a / *b;  
    *b = temp_a % *b;  
}

int main(void)
{
    int a = 10;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);  


    write(1, "a = 3, b = 1\n", 14);

    return 0;
}

