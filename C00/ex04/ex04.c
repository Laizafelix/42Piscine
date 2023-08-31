#include <unistd.h>

void ft_is_negative (int n)
{
        if (n < 0)
        {
                char negative = 'N';
                write(1, &negative, 1);
        }
        else
        {
                char positive = 'P';
                write(1, &positive, 1);
        }
        write(1, "\n", 1);
}

int main()
{
        int number = -5;
        ft_is_negative(number);
        return 0;
}
