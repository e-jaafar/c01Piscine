#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;  // Déréférencer 9 fois pour accéder à l'entier et lui attribuer 42
}

int main(void)
{
    int a;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;

    ft_ultimate_ft(p9);
    write(1, "a = 42\n", 7); 
    return 0;
}

