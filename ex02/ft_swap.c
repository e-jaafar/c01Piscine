#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;  
    *a = *b;  
    *b = temp; 
}

int main(void)
{
    int x = 42;
    int y = 21;

    ft_swap(&x, &y); 

    write(1, "x = 21, y = 42\n", 15);

    return 0;
}

