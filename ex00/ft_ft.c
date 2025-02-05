#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    ft_ft(&a);

    write(1, "42", 2);  // Affiche directement "42"
    
    return 0;
}

