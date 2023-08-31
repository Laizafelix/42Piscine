#include <unistd.h>

void    ft_print_reverse_alphabet(void)

{
        char    l;

        l = 'z';
        while (l >= 'a')
        {
                write(1, &l, 1);
                        l--;
        }
        write(1, "\n", 1);
}

int     main(void)

{
        ft_print_reverse_alphabet ();
        return (0);
}
